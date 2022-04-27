// LOGICAL AND &&

// X   Y     X && Y
// 0   0       0
// 0   1       0
// 1   0       0
// 1   1       1

// Where 0 is false
// and 1 is true

// 2 Tricks to follow && Operator

// i. Simple Numbers
// ii. Expressions and Conditions

//I. Simple Numbers
// Here 22 and 33 are simple numbers
// and && Operators always take last end value which is 33
// If there is no 0 then it takes last value
// If it founds any zeros then all zeros

console.log(22 && 33); // 33
console.log(22 && 0 && 33); // if you found zero then all 0
console.log(11 && 34 && 0 && 23); // here we have 0 then all 0
console.log(12 && 23 && 0); // last number  zero then all in zero

// 2. Condtions and Expressions

let num1 = 10;
let num2 = 20;

console.log(num1 < num2 && num2 > num1); // true && true ==> true
console.log(num1 < num2 && num2 < num1); // true && false ===> false
console.log(num2 < num1 && num1 < num2); // false && true ==> false
console.log(num2 < num2 && num2 < num1); // false and false ===> false
