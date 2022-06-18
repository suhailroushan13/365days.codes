import readline from "readline-sync";
import mgpaCalculator from "./mgpa.js";
import cgpaCalculator from "./cgpa.js";

console.clear();

console.log("++++++++++++++++++++++++++");
console.log("MGPA / CGPA Calculator");
console.log("++++++++++++++++++++++++++");

async function main() {
  try {
    let option = ` 1. MGPA \n 2. CGPA \n 3. Exit`;
    console.log(option);
      let choice = readline.questionInt("Enter your choice: ");
      console.log(choice);
      
    switch (choice) {
      case 1:
        await mgpaCalculator();
        break;
      case 2:
        await cgpaCalculator();

        break;
      case 3:
        console.log("Exiting...");
        break;
    /* The default case for the switch statement. */
      default:
        console.log("Invalid choice");
        break;
    }
  } catch (error) {
    console.log(error);
  }
}
main();
export default main;