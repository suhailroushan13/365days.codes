import readline from "readline-sync";
import main from "./main.js";

async function mgpaCalculator() {
  try {
    console.clear();
    console.log("++++++++++++++++++++++++++");
    console.log("MGPA Calculator");
    console.log("++++++++++++++++++++++++++");

    let totalCredits = 0;
    let totalCreditPoints = 0;

    let studentName = readline.question("Enter Student name: ");
    console.log("\n");

    let matNumber = readline.question("Enter your MAT number: ");
    console.log("\n");

    let noOfCourses = readline.question("Enter the number of courses: ");
    console.log("\n");

    for (let i = 1; i <= noOfCourses; i++) {
      let courseCredit = readline.question(`Enter the Course Credit ${i}: `);
      let grade = readline.question(`Enter the Grade Point ${i}: `);
      console.log("\n");

      totalCredits += parseInt(courseCredit);
      totalCreditPoints += courseCredit * grade;
    }
    console.log("\n");
    let mgpa = totalCreditPoints / totalCredits;
    console.log(`${studentName}'s ${matNumber} MAT MGPA Score is ${mgpa}`);

    console.log("Redirecting you to Main Menu in 5 Seconds");

    setTimeout(() => {
      console.clear();
      main();
    }, 5000);
  } catch (error) {
    console.log(error);
  }
}

export default mgpaCalculator;
