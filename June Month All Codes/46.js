
console.log("For loop");

// For Loop //

let cars = ["BMW", "Suzuki", "Toyota", "Honda"];

let i = 0;

for (i; i <=cars.length-1; i++) {
  console.log(cars[i]);
}

console.log("\n");

console.log("While loop");

// While Loop //

let j = 0;
while (j <= cars.length-1 ) {
  console.log(cars[j]);
  j++;
}

console.log("\n");

console.log("Do while loop");


// Do While

let k = 0;
do {
  console.log(cars[k]);
  k++;
} while (k <= cars.length -1);

console.log("\n");

console.log("For Each loop");

// ForEach

cars.forEach((ele, index) => {
  console.log(ele, index);
});

console.log("\n");

console.log("For of loop");

// For of Loop

for (let car of cars) {
  console.log(car);
}
console.log("\n");

console.log("For in loop");

// For In Loop

for (let index in cars) {
  console.log(cars[index]);
}


console.log("\n");

//Map Loop
console.log("MAP Loop");


cars.map((ele, index) => {
    console.log(ele);
    
})