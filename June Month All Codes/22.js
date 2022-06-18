import readline from "readline-sync";

let ask = readline.question("Enter a number: ");
let sum = 0
for (let i = 1; i <= ask; i++) {
    // console.log(i);
    sum += i;
    
}
    
console.log("Sum of all numbers: " + sum);
