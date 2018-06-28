var hikes = [
	{
		id: 0,
		name: "Tricky Trails",
		location: "Lakebed, Utah",
		distance: 10.4,
		rating: 4,
		comments: "This hike was nice and hike-like. Glad I didn't bring a bike."
	}
];	

function getHikes() {
	return new Promise(function(resolve, reject) {
		setTimeout(function() {
			resolve(hikes);
		}, 500);
	});
}
function updateHike(id, name, location, distance, rating, comments) {
	return new Promise(function(resolve, reject) {
		setTimeout(function() {
			for (var i = 0; i < hikes.length; i++) {
				var hike = hikes[i];
				if (hike.id == id) {
					hike.name = name;
					hike.location = location;
					hike.distance = distance;
					hike.rating = rating;
					hike.comments = comments;
					break;
				}
			}

			resolve();
		}, 0);
	});
}

module.exports = {
	hikes:hikes,
	getHikes: getHikes,
	updateHike: updateHike
};

