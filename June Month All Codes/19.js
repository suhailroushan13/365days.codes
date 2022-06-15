// Ternary Operator

import readline from "readline-sync";

let ask = readline.question("Enter a number: ");

(ask >0) ? console.log("POSTIVE") : (ask <0) ? console.log("NEGATIVE") : (ask == 0) ? console.log("ZERO") : console.log("SOMETHING ELSE");
