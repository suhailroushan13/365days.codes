// Inserting In An Array at a Specific Position

let animals = ["Cat", "Dog", "Cow", "Horse"];
console.log(animals); // Cat , Dog , Cow , Horse
animals[2] = "Lion";  // Changes Done in the Array
console.log(animals); // Cat , Dog , Lion , Horse


console.table(animals); // This is the Table View of the Array
// ┌─────────┬─────────┐
// │ (index) │ Values  │
// ├─────────┼─────────┤
// │    0    │  'Cat'  │
// │    1    │  'Dog'  │
// │    2    │ 'Lion'  │
// │    3    │ 'Horse' │
// └─────────┴─────────┘