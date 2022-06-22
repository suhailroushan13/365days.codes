// Primitive and Reference Types

let num1 = 10;
let num2 = 20;

console.log(++num1); // 11
console.log(num2++); // 20
console.log(num2); // 21

// Reference Types
let array1 = [1, 2, 3, 4, 5];
let array2 = array1;
console.log(array1); // [1, 2, 3, 4, 5]
console.log(array2); // [1, 2, 3, 4, 5]
array1.unshift(0);
console.log("After unshift or Incrementing the first element of array1");

console.log(array1); // [0, 1, 2, 3, 4, 5]
console.log(array2); // [0, 1, 2, 3, 4, 5]


// Primitive Types

// Data Types Like String, Number, Boolean, Null, Undefined 

// They are Stored in Stack Memory

// let num1 = 10;
// let num2 = num1;
// ┌────────────────┬───────────────────────────────────┐
// │ (stack)        │ Values                            │
// ├────────────────┼───────────────────────────────────┤
// │                │                                   │
// │                │                                   │
// │    num2 = num1 │ '689475(Random Unique) (Address)' │
// │    num1 =10    │ '372646 (Random Uniqe) (Address)' │
// └────────────────┴───────────────────────────────────┘
// ++num1 ; will increase the value of num1 by 1 in the stack memory of its address 
//and num2 will be the same as num1

// console.log(num1); // 11
// console.log(num2); // 10 // Because num2 is the same as num1 as it is a primitive type from previous example


// Reference Types

// Objects, Arrays are Stored in Heap Memory (Its Follows The Same Address Pattern When we Copy from a Variable)

// let array1 = [1, 2, 3, 4, 5];
// let array2 = array1;

// Heap Memory
//  --------------- 
//  |             |    
//  |             | 
//  |  [1,2,3,4,5]| ===>  
//  |             |
//  |             |
//  |             |
// ----------------
// Same Behaviour as Heap Memory follow the same address pattern
// which gives the same address to the same value
// and we get same value 
// ┌────────────────┬───────────────────────────────────┐
// │ (stack)        │ Values From Heap and Its Address  │
// ├────────────────┼───────────────────────────────────┤
// │                │                                   │
// │                │                                   │
// │    num2 = num1 │ '372646(Random Unique) (Address)' │
// │    num1 =10    │ '372646 (Random Uniqe) (Address)' │
// └────────────────┴───────────────────────────────────┘

// let array1 = [1, 2, 3, 4, 5];
// let array2 = array1;
// console.log(array1); // [1, 2, 3, 4, 5]
// console.log(array2); // [1, 2, 3, 4, 5]
