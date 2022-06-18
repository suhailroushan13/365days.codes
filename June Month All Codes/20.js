const obj = {
    names: "John",
    age: 30,
    isMarried: false,
    alive: true,
    
};

console.log("names" in obj);
console.log("age" in obj);
console.log("isMarried" in obj);


let names = ["John", "Jane", "Mary", "Mark", "Bob"];

console.log(7 in names);



const car = { make: "Honda", model: "Accord", year: 1998 };

console.log("year" in car);