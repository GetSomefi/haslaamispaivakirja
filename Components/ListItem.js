//this is for testing only (listitem2.ux)
console.log("List item module init!");
var visibleValue = this.TheValue.map(function(x) {						
	if(x == "True" || x == "False"){
		return "Collapsed";
	}else{ 
		return "Visible";
	}
});
var localLabel = this.TheValue.map(function(x) {
	if(x != "True" && x != "False"){
		return x;
	}
});
var localLabel2 = this.RealLabel.map(function(labelValue) {
	return labelValue;
});
var visible = this.TheValue.map(function(x) {
	var boolean;
	var val;
	if(x === "True"){
		boolean = true;
	}else if(x === "False" || x === ""){
		boolean = false;
	}else{
		boolean = true;
	}

	if(boolean){
		val = "Visible";
	}else{
		val = "Collapsed";
	}
	return val;
});
module.exports = {
	localLabel: localLabel,
	localLabel2: localLabel2,
	visible:visible,
	visibleValue:visibleValue
};