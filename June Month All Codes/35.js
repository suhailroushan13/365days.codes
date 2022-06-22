// DataType Of Array

let fruits = ["Apple", "Orange", "Mango", "WaterMelon", "Number"];
console.log(typeof fruits); // This gives Output as Object

Array.isArray(fruits); // This gives Output as true
console.log(Array.isArray(fruits));


// To Add a Element in Array in Last Position

let cars = ["BMW", "Audi", "Mercedes"];
cars.push("Honda");
console.log(cars); // This gives Output as BMW , Audi , Mercedes , Honda


// To Remove  a Element in Array in Last Position
let juices = ["Apple", "Orange", "Mango", "WaterMelon", "Number"];
juices.pop();
console.log(juices); // This gives Output as Apple , Orange , Mango , WaterMelon

// To Add a Element in Array in First Position
let curreny = ["USD", "INR", "EURO"];
curreny.unshift("AUD");
console.log(curreny); // This gives Output as AUD , USD , INR , EURO

// To Remove  a Element in Array in First Position
let cartoons = ["Tom and Jerry", "Spiderman", "Batman"];
cartoons.shift();
console.log(cartoons); // This gives Output as Spiderman , Batman


