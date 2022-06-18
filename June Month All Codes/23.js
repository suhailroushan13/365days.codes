import readline from "readline-sync";
// let ask = readline.question("Enter a number: ");
let sum = 0;

function table(ask, last) {
  for (let i = 1; i <= last; i++) {
    console.log(`${ask} X ${i} = ${ask * i}`);
  }
}
table(5, 10);
export default table;