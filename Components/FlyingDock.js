
console.log('Current page ', JSON.stringify(this.title)); 
var visibleValue = this.title.map(function(x) {						
	console.log('title', x);
	return x;
});
function goHome() {
	router.push("first");
}
function goSplash() {
	router.push("splash");
}
function goSettings() {
	router.push("settings");
}
function goBack() {
	router.goBack();
}
module.exports = {
	goSettings:goSettings,
	goBack:goBack,
	goHome:goHome,
	goSplash:goSplash,
	visibleValue:visibleValue
}