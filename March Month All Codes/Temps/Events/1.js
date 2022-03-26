import events from "events";
import EventEmitter from "events";

let myEvent = new EventEmitter();
myEvent.on("Hello", () => {
    console.log("Hello Suhail");
    
})

myEvent.emit("Hello");

