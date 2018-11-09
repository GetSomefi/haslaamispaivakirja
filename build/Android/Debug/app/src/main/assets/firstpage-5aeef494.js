var Observable = require("FuseJS/Observable");
var isOnVal = Observable(false);
var dFull = new Date();
//dFull.setDate(dFull.getDate() + 3); //to test other dates
var d = "date_" + String(dFull.getDate() + "_" + (dFull.getMonth()+1) + "_" + dFull.getFullYear());

var storagedContent;

var storagedContentTemp;
storagedContentTemp = {};

var Storage = require("FuseJS/Storage");

//var SAVENAME = "localStorage.json"; //sisältää testiä varten paljon tietoja
var SAVENAME = "localStorage2.json"; //tämä on tyhjäämisen testaamista varten

var welcomeText = Observable("Loading...");
var message = Observable("");
var hasStored = Observable(false);
var saved = Observable(false);

var entrystr = Observable();
var entrystrSendName = Observable();

debug_log("------------ INIT ------------");

function readStoraged(){
	Storage.read(SAVENAME).then(function(content) {
		//console.log('Stored data exists #' + content + "#");

	    if( content.trim() == 0 ){
	    	//console.log('No entrys');
	    	storagedContent = JSON.stringify({});
			Storage.write(SAVENAME, storagedContent )
		    .then(function(success) {
		        //console.log('jee? ', success); 
		        //console.log('file should be like this', JSON.stringify(storagedContent) );

				Storage.read(SAVENAME)
				.then(function(contents) { 
				    //console.log('d ', contents);
				    //storagedContent = contents;
				    storagedContent = JSON.parse(contents);
				});
		        
		    });
	    }else{
	    	//console.log('Has entrys');
	    	//console.log('data', content);
		   	storagedContent = JSON.parse(content);
		    welcomeText.value = 'Data loaded';    	
	    }

	}, function(error) {
		storagedContent = {};
	    //For now, let's expect the error to be because of the file not being found.
	    welcomeText.value = "There is currently no local data stored";
	});
}
readStoraged();

function save() {
	//Context.updateHike(hike.value.id, name.value, location.value, distance.value, rating.value, comments.value);
	router.goBack();
}
function cancel() {
	// Refresh hike value to reset dependent Observables' values
	//hike.value = hike.value;
	router.goBack();
}
function isThisActive(arg){
	//arg.value = true;
	//console.log('Is active', JSON.stringify(arg) ); 
}

function savingTheData(a){	
	//console.log( "content", JSON.stringify(storagedContent) ); 
	//prepare the data for storage
		//setting date as key
	if( storagedContent.hasOwnProperty(d) ){
		console.log('on ',d); 
		storagedContent[d][a.sender] = a.value;
		storagedContent[d]["lastModified"] = dFull;
	}else{
		console.log('data ' + d + " doesn't exist");

		storagedContent[d] = {};
		storagedContent[d][a.sender] = a.value;
		storagedContent[d]["lastModified"] = dFull;
		//console.dir(storagedContent); 	
	}
	//empty file for testing
	//storagedContent = 0;
	
	storagedContent = JSON.stringify(storagedContent);
	//console.log('storing',storagedContent); 
	
	//Storing to file
	Storage.write(SAVENAME, storagedContent )
    .then(function(success) {
        //console.log('jee? ', success); 
        //console.log('file should be like this', JSON.stringify(storagedContent) );

        saved.value = true;
		
		//clearTimeout(timeout);
		//var timeout = setTimeout(function() {
        	//saved.value = false;
    	//}, 1500);
		
		Storage.read(SAVENAME)
		.then(function(contents) { 
		    //console.log('d ', contents);
		    //storagedContent = contents;
		    storagedContent = JSON.parse(contents);
		});
        
    });
    readStoraged();
}

function isOnButton(){
	storagedContent[d] = {};
	storagedContent[d] = storagedContentTemp;
	storagedContent[d]["lastModified"] = dFull;

	storagedContent = JSON.stringify(storagedContent);
	console.log('storing',storagedContent); 
	
	//Storing to file
	Storage.write(SAVENAME, storagedContent )
    .then(function(success) {
        //console.log('jee? ', success); 
        //console.log('file should be like this', JSON.stringify(storagedContent) );

        //this triggers animation for save button (this takes it back down)
        saved.value = false;
		
		//clearTimeout(timeout);
		//var timeout = setTimeout(function() {
        //	saved.value = false;
    	//}, 1500);
		
		Storage.read(SAVENAME)
		.then(function(contents) { 
		    console.log('d ', contents);
		    //storagedContent = contents;
		    storagedContent = JSON.parse(contents); 
		});
        
    });
}

//this function is triggered by BasicSwipeToggle. It now only
//triggers save button to popup
//this function makes temp array that is stored later
//function changeSaved(){ //tämä oli auto savea varten
//function isOn(a,text){
function isOn(a){

	console.log('Save button jump visible from toggle');
	//this triggers animation for save button (this takes it up)
	saved.value = true;

	var saveableContent;
	saveableContent = isOnVal.value;

	storagedContentTemp[a.sender] = saveableContent;

	storagedContentTemp_print = JSON.stringify(storagedContentTemp);
	
	console.log('stor Temp', storagedContentTemp_print); 
}

function isOnInput(a){

	console.dir(a);
	console.log('entrystr.value',entrystr.value);
	//console.log('entrystr.value',entrystr.value);
	//console.log('entrystrSendName.value',entrystrSendName.value);  
	console.log('Save button jump visible from input');
	//this triggers animation for save button (this takes it up)
	saved.value = true;

	var saveableContent = entrystr.value;

	storagedContentTemp[a.sender] = saveableContent;

	storagedContentTemp_print = JSON.stringify(storagedContentTemp);
	
	console.log('stor Temp', storagedContentTemp_print); 
}

function isOnInputDropDown(a){

	//console.dir(a);
	console.log('entrystr.value',entrystr.value);
	console.log('entrystrSendName.value',entrystrSendName.value);  
	console.log('Save button jump visible from input');
	//this triggers animation for save button (this takes it up)
	saved.value = true;

	var saveableContent = entrystr.value;

	storagedContentTemp[entrystrSendName.value] = saveableContent;

	storagedContentTemp_print = JSON.stringify(storagedContentTemp);
	
	console.log('stor Temp', storagedContentTemp_print); 
}

function q(){
//console.log("##q", JSON.stringify(a)); 
}
function a(){
//console.log("##a", JSON.stringify(a)); 	
}

function goToOldEntrys() {
	router.push("oldentrys");
}

function tester(a){
	console.dir('## - ## ', a );
}

function saveInput() {
	//console.log('Päivitys'); 
}

module.exports = {
	welcomeText:welcomeText,
	q:q,
	a:a,
	isOn:isOn,
	isOnInput:isOnInput,
	isOnInputDropDown:isOnInputDropDown,
	isOnButton:isOnButton,
	isOnVal:isOnVal,
	isThisActive:isThisActive,
	save:save,
	cancel: cancel,
	goToOldEntrys:goToOldEntrys,
	saveInput:saveInput,
	saved:saved,
	
	listOfAnger:[
		//src https://mielenihmeet.fi/4-keinoa-joilla-pitaa-viha-hallinnassa/
		{
			"key":0,
			"name":"Keskityin vihan aiheuttamiin fyysisiin tuntemuksiin",
			"info":"Usein kehon tuntemuksien kuuntelu sen ollessa vihainen vähentää vihan tunnepohjaista vahvuutta. "
		},
		{
			"key":1,
			"name":"Otin useita syviä hengenvetoja",
			"info":"Hitaasti ja syvään hengittäminen auttaa häivyttämään jännitettä. Avain tähän on syvään hengittäminen vatsasta lähtien, hengittäen sisään niin paljon ilmaa kuin mahdollista. "
		},
		{
			"key":2,
			"name":"Lähdin liikkeelle",
			"info":"Liike auttaa vapauttamaan kertynyttä energiaa jotta voit käydä tilanteeseen käsiksi kirkkaalla mielellä. "
		},
		{
			"key":3,
			"name":"Käytin aistejani",
			"info":"Ota hyöty irti aistiesi rentouttavasta voimasta: kuuntele musiikkia, visualisoi paikka joka rauhoittaa sinua, jne ... "
		},
		{
			"key":4,
			"name":"Venytin ja hieroin jännittyneitä alueita",
			"info":" Liikuta hartioitasi. Hiero päänahkaasi. Oleellista on rentouttaa ne vartalonosat, joihin jännitys fyysisesti vaikuttaa. "
		},
		{
			"key":5,
			"name":"Laskin hitaasti kymmeneen.",
			"info":"Tämä tekniikka pyrkii jättämään mielen paljon rationaalisempaan tilaan ja pitämään meidät tilanteen tasalla omien tunteidemme suhteen. Jos yksi kerta ei riitä, tee se uudestaan. "
		}
	],

/*
	onType1:onType1,
	onType2:onType2,
	onType3:onType3,
	onType4:onType4,
	onType5:onType5,
	onType6:onType6,
*/

	entrystr:entrystr,
	entrystrSendName:entrystrSendName
};
