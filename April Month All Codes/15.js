// LOGICAL OR ||

// X   Y     X || Y
// 0   0       0
// 0   1       1
// 1   0       1
// 1   1       1

// Where 0 is false
// and 1 is true

// 2 Tricks to follow || Operator

// i. Simple Numbers
// ii. Expressions and Conditions

//I. Simple Numbers
// Here 22 and 33 are simple numbers
// and || Operators always take FIRST end value which is 22
// If there is no 0 then it takes Next Value value


console.log(22 || 33); // 22
console.log(22 || 0 || 33); // 22 
console.log(11 || 34 || 0 || 23); // 11
console.log(12 || 23 || 0); // 12
console.log(0 || 23 || 12); // 23 // Only if 1st is 0 then take 2nd value


// 2. Condtions and Expressions

let num1 = 10;
let num2 = 20;

console.log(num1 < num2 || num2 > num1); // true || true ==> true
console.log(num1 < num2 || num2 < num1); // true || false ===> true
console.log(num2 < num1 || num1 < num2); // false || true ==> true
console.log(num2 < num2 || num2 < num1); // false and false ===> false
