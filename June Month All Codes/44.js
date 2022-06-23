//  Array Destructing

const myArray = ["value1", "value2", 3];

// let v1 = myArray[0];
// let v2 = myArray[1];
// console.log(v1,v2);

//   0   1   of myArray
let [v1, v2, v3] = myArray;
console.log(v1, v2, v3);


const numbers = ["one", "two", "three", "four"];
let [n1, n2, , n4] = numbers;
console.log(n1, n2, n4);

const box = ["item1", "item2", "item3", "item4", "item5"];
let [m1, m2, m3, ...newbox] = box;
newbox = box.slice(3);
console.log(m1, m2, m3);
console.log(newbox);



