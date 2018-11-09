var storagedContent;
var Storage = require("FuseJS/Storage");
var Observable = require("FuseJS/Observable");

//var SAVENAME = "localStorage.json"; //sisältää testiä varten paljon tietoja
var SAVENAME = "localStorage2.json"; //tämä on tyhjäämisen testaamista varten

var dataExists = Observable("Loading...");
var eraseData = Observable();
var message = Observable("");
var hasStored = Observable(false);
debug_log("------------ INIT ------------");

Storage.read(SAVENAME).then(function(content) {
	console.log('Stored data exists #' + content + "#");

    if( content.trim() == 0 ){
    	console.log('No entrys');
    	storagedContent = JSON.stringify({});
		Storage.write(SAVENAME, storagedContent )
	    .then(function(success) {
	        console.log('jee? ', success); 
	        console.log('file should be like this', JSON.stringify(storagedContent) );

			Storage.read(SAVENAME)
			.then(function(contents) { 
			    console.log('d ', contents);
			    //storagedContent = contents;
			    storagedContent = JSON.parse(contents);
			});
	        
	    });
    }else{
    	console.log('Has entrys');
    	console.log('data', content);
	   	storagedContent = JSON.parse(content);
	    dataExists.value = 'Tallessa';    	
    }

}, function(error) {
	storagedContent = {};
    //For now, let's expect the error to be because of the file not being found.
    dataExists.value = "There is currently no local data stored";
});

eraseData = function(){
	dataExists.value = 'Poistetaan...';

	/*Storage.write(SAVENAME, "" )
    .then(function(success) {
        dataExists.value = 'POISTETTU';
   	});
   	*/

	var success = Storage.deleteSync(SAVENAME);
	if(success) {
	    dataExists.value = 'POISTETTU';
	}
	else {
	    dataExists.value = 'Virhe poistossa!';
	}
}

function goToOldEntrys() {
	router.push("oldentrys");
}

module.exports = {
	dataExists:dataExists,
	eraseData:eraseData,
	goToOldEntrys:goToOldEntrys
}