import readline from "readline-sync";
import main from "./main.js";

async function cgpaCalculator() {
  try {
    console.clear();
    console.log("++++++++++++++++++++++++++");
    console.log("CGPA Calculator");
    console.log("++++++++++++++++++++++++++");
    let totalCredits = 0;
    let creditsXmgpa = 0;

    let studentName = readline.question("Enter Student name: ");
    console.log("\n");
    let noOfMats = readline.question("Enter the number of MATs: ");
    console.log("\n");
    for (let i = 1; i <= noOfMats; i++) {
      let credits = readline.question(`Enter the Credit of ${i}: `);
      let mgpa = readline.question(`Enter the MGPA of ${i}: `);
      console.log("\n");
      totalCredits += +credits;
      creditsXmgpa += +credits * +mgpa;
    }

      let cgpa = creditsXmgpa / totalCredits;
      
      let score = console.log(`${creditsXmgpa}/${totalCredits} = ${cgpa.toFixed(2)}`);
      
    console.log(`${studentName}'s Till Now Your CGPA Score is ${cgpa.toFixed(2)}`);
    console.log("\n");
   console.log("Redirecting you to Main Menu in 5 Seconds");

    setTimeout(() => {
      console.clear();
      main();
    }, 50000);
  } catch (error) {
    console.log(error);
  }
}

export default cgpaCalculator;
