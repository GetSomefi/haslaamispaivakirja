var Observable = require("FuseJS/Observable");
var Storage = require("FuseJS/Storage");
var SAVENAME = "localStorage.json";

var listoofoldentrys = Observable();
var listoofoldentrys2 = Observable();
var listing = Observable();
var dataText = Observable("Loading...");

var labels = {
	mita_kiusaus:"Joku kiusasi minua.",
	mita_varkaus:"Joku otti jotain minulle kuuluvaa.",
	mita_inho:"Joku teki jotain, mistä en pitänyt.",
	mita_teinvaarin:"Tein jotain väärin.",
	mita_riitely:"Joku alkoi riidellä tai tapella kanssani.",
	mita_muuta:"Muuta",
	milloin_aamu:"Aamu",
	milloin_iltapaiva:"Iltapäivä",
	milloin_ilta:"Ilta",
	missa_koulu:"Luokassa/koulussa",
	missa_asuntola:"Asuntolassa",
	missa_liikuntasali:"Liikuntasalissa",
	missa_oleskelutila:"Oleskelutiloissa",
	missa_wc:"WC:ssä",
	missa_kanslia:"Kansliassa",
	missa_ruokala:"Ruokalassa",
	missa_ulkona:"Ulkona/pihalla",
	missa_kadulla:"Kadulla",
	missa_kaytavalla:"Käytävällä",
	missa_toissa:"Töissä",
	missa_muualla:"Muualla, missä?",
	kuka_toinen:"Toinen nuori",
	kuka_vanhempihoitaja:"Vanhempi / hoitaja",
	kuka_opettaja:"Opettaja",
	kuka_koulukuraattori:"Koulukuraattori",
	kuka_jokumuu:"Joku muu",
	mitateit_loin:"Löin takaisin",
	mitateit_juoksin:"Juoksin pois",
	mitateit_huusin:"Huusin",
	mitateit_itkin:"Itkin",
	mitateit_kavelinpois:"Kävelin pois rauhallisesti",
	mitateit_rikoinjotain:"Rikoin jotain",
	mitateit_kerroinaiku:"Kerroin aikuiselle",
	mitateit_kerroinkave:"Kerroin kaverille",
	mitateit_envalittanut:"En välittänyt asiasta",
	mitateit_hoidinasianpuhumalla:"Hoidin asian puhumalla",
	mitateit_vihanhallinanmenetelma:"Käytin vihanhallinan menetelmää (mitä)",
	mitateit_sosiaalinentaito:"Käytin sosiaalista taitoa (mitä)",
	mitateit_jotainmuuta:"Jotain muuta",
	viha_kihisinraivosta:"Kihisin raivosta",
	viha_todellavihainen:"Todella vihainen",
	viha_melkovihainen:"Melko vihainen",
	viha_lievaviha:"Lievästi vihainen, mutta silti OK",	
	viha_enlainkaan:"En lainkaan vihainen",
	hallinta_1:"Huonosti",
	hallinta_2:"En kovin hyvin",
	hallinta_3:"Melko hyvin",
	hallinta_4:"Hyvin",
	hallinta_5:"Todella hienosti"
}

function goBack() {
	console.log('Ei toimi?'); 
	router.goBack();
	router.goto("first");
}

function readEntry(key){
	//console.log('reading entry');
	//console.log(JSON.stringify(listoofoldentrys2)); 

	//listing.value = "";
	var splittedDate = key.split("_");
	var reparedDate = splittedDate[1] + "." + splittedDate[2] + "." + splittedDate[3]
	dataText.value = "Tiedot "+reparedDate+" haettu";
	var obj = listoofoldentrys2;
	if(obj.hasOwnProperty(key)){
		//console.log('key on ', JSON.stringify(obj[key]));
		
		var obj2 = obj[key];
		//listing.add(obj2);
		//console.log('label',labels[key], "haettu", JSON.stringify(obj2));
		for( var k in obj2 ){
			for( var k2 in labels ){
				if( k == k2  ){
					console.log('key match ', k + " on " + k2);

					var key = k + "_label";
					var newObj = {};
					newObj[key] = labels[k]
					obj2[key] = labels[k];
				}
			}
		}

		listing.value = obj2;		
	}else{
		console.log("Key doesn't exist");
	}
	console.log('list = ', JSON.stringify(listing)); 

}

function openEntry(parameter){
	console.log('pa',JSON.stringify(parameter)); 
	console.log('clicked key', parameter.data.key );
	readEntry(parameter.data.key);
}


Storage.read(SAVENAME)
.then(function(response) {
	dataText.value = "Lista haettu";
	console.log(response);
	
	listoofoldentrys2 = JSON.parse(response);
	
	var listoofoldentrys_ = JSON.parse(response);

	for( var key in listoofoldentrys_ ){
		listoofoldentrys.add({
			key:key
		});
	}
}, function(error) {
    //For now, let's expect the error to be because of the file not being found.
    dataText.value = "There is currently no local data stored";
});



module.exports = {
	listoofoldentrys:listoofoldentrys,
	listoofoldentrys2:listoofoldentrys2,
	goBack:goBack,
	dataText:dataText,
	openEntry:openEntry,
	listing:listing,
	labels:labels
};
