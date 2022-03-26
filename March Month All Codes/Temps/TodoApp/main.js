import readLineSync from "readline-sync";
import timer from "./helpers/loading.js";
import loading from "loading-cli";
import color from 'cli-color'

import todos from "./todos/index.js"
import users from "./users/index.js"

var msg = color.xterm(198)
async function main() {
    try {
        console.clear();
        console.log(color.cyan.blink("+-------------------------+"))
        console.log(color.cyan.blink("\tMenu Options\t\t"));
        console.log(color.cyan.blink("+-------------------------+"))

        const options = [
            "Exit the Program",
            "Register New User",
            "User Login",
            "Fetch all the Todos",
            "Inster a New Todo",
            "Update a Todo",
            "Delete a Todo",
            "Delete the User Account",
        ];
        options.forEach((ele, index) => { console.log(`\t${index} To ${ele}`); });
        console.log("+-------------------------+");

        const option = readLineSync.questionInt("Enter Your Option : ");
        if (option >= 0 && option <= options.length - 1) {
            switch (option) {
                case 1:
                    await users.register()
                    break
                case 2:
                    await users.login()
                    break
                case 3:
                    await todos.getTodos()
                    break
                case 4:
                    await todos.insertTodo()
                    break
                case 5:
                    await todos.updateTodos()
                    break
                case 6:
                    await todos.deleteTodo()
                    break
                case 7:
                    await users.deleteUser()
                    break
                default:
                    process.exit(0)
            }
            var ShouldContinue = readLineSync.question(msg.italic("Want to continue ?(y/n)"))
            if (ShouldContinue == "Y" || ShouldContinue == "y" || ShouldContinue == "yes")
                main();
            else
                console.log(msg.italic("Thank you. Visit us again. BYE! :)"))
        } else {
            const load = loading(color.red("Invalid Option. Redirecting to Main Menu....")).start()

            await timer(3000);
            load.stop();
            main();
        }
    } catch (error) {
        console.error(error);
    }
}

main();