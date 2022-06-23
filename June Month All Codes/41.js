let cars = ["BMW", "Volvo", "Saab", "Ford"];

for (let i = 0; i <= cars.length - 1; i++) {
  console.log(cars[i]);
}
console.log("This is a For Each Loop With All Upper Case");
console.log("\n");


cars.forEach((ele, index) => {
  console.log(ele.toUpperCase(),index+1);
});

console.log("\n");

console.log("This is a While loop");
let i = 0;
while (i <= cars.length - 1) {
  console.log(cars[i]);

  i++;
}

console.log("\n");

console.log("This is a Do While Loop");

let j = 0;
do {
  console.log(cars[j]);
  j++;
} while (j <= cars.length - 1);
