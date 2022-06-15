import readline from "readline-sync";

let ask = readline.question("Enter a number: ");

if (ask > 0) {
  console.log("You entered Postive: " + ask);
} else if (ask < 0) {
  console.log("You entered Negative: " + ask);
} else if (ask == 0) {
  console.log("You entered Zero: " + ask);
}
else {
  console.log("You entered something else: " + ask);
}
