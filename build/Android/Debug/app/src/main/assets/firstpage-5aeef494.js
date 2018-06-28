var Observable = require("FuseJS/Observable");
var isOnVal = Observable(false);
var dFull = new Date();
var d = "date_" + String(dFull.getDate() + "_" + (dFull.getMonth()+1) + "_" + dFull.getFullYear());

var storagedContent;

var Storage = require("FuseJS/Storage");

var SAVENAME = "localStorage.json";

var welcomeText = Observable("Loading...");
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
	    welcomeText.value = 'Data loaded';    	
    }

}, function(error) {
	storagedContent = {};
    //For now, let's expect the error to be because of the file not being found.
    welcomeText.value = "There is currently no local data stored";
});

function goBack() {
	router.goBack();
}
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
	console.log('Is active', JSON.stringify(arg) ); 
}

function savingTheData(a){	
	console.log( "content", JSON.stringify(storagedContent) ); 
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
		console.dir(storagedContent); 	
	}
	//empty file for testing
	//storagedContent = 0;
	
	storagedContent = JSON.stringify(storagedContent);
	console.log('storing',storagedContent); 
	
	//Storing to file
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
}

function isOn(a){
	
	console.log( "content", JSON.stringify(storagedContent) ); 
	//prepare the data for storage
		//setting date as key
	if( storagedContent.hasOwnProperty(d) ){
		console.log('on ',d); 
		storagedContent[d][a.sender] = isOnVal.value;
		storagedContent[d]["lastModified"] = dFull;
	}else{
		console.log('data ' + d + " doesn't exist");

		storagedContent[d] = {};
		storagedContent[d][a.sender] = isOnVal.value;
		storagedContent[d]["lastModified"] = dFull;
		console.dir(storagedContent); 	
	}
	//empty file for testing
	//storagedContent = 0;
	
	storagedContent = JSON.stringify(storagedContent);
	console.log('storing',storagedContent); 
	
	//Storing to file
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
}
function q(){
console.log("##q", JSON.stringify(a)); 
}
function a(){
console.log("##a", JSON.stringify(a)); 	
}

function goToOldEntrys() {
	router.goto("oldentrys");
}

function onType1(args) {
	console.log('value',args.value);
	var a = {
		sender:"mita_muuta",
		value:args.value
	}
	savingTheData(a);
}
function onType2(args) {
	console.log('value',args.value);
	var a = {
		sender:"missa_muualla",
		value:args.value
	}
	savingTheData(a);
}
function onType3(args) {
	console.log('value',args.value);
	var a = {
		sender:"kuka_jokumuu",
		value:args.value
	}
	savingTheData(a);
}
function onType4(args) {
	console.log('value',args.value);
	var a = {
		sender:"mitateit_sosiaalinentaito",
		value:args.value
	}
	savingTheData(a); 
}
function onType5(args) {
	console.log('value',args.value);
	var a = {
		sender:"mitateit_jotainmuuta",
		value:args.value
	}
	savingTheData(a); 
}
function onType6(args) {
	console.log('value',args.value);
	var a = {
		sender:"mitateit_vihanhallinanmenetelma",
		value:args.value
	}
	savingTheData(a); 
}


function saveInput() {
	console.log('Päivitys'); 
}

module.exports = {
	welcomeText:welcomeText,
	q:q,
	a:a,
	isOn:isOn,
	isOnVal:isOnVal,
	isThisActive:isThisActive,
	save:save,
	cancel: cancel,
	goBack: goBack,
	goToOldEntrys:goToOldEntrys,
	saveInput:saveInput,

	onType1:onType1,
	onType2:onType2,
	onType3:onType3,
	onType4:onType4,
	onType5:onType5,
	onType6:onType6
};
