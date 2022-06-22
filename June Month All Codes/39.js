// How to Clone an Array with the Equal to Sign ( = ) 
// Having Same Address with Equal Sign ( = )

// Both the Arrays are pointing to the Same Address with Same Values
// Method 1:
// let animals = ["Cat", "Dog", "Cow", "Horse"];
// let animalsClone = animals;
// console.log(animalsClone); // Cat , Dog , Cow , Horse
// How to Verify Both Arrays Are Equal and Same
// console.log(animals === animalsClone); // true
// console.table(animalsClone); // This is the Table View of the Array
//  ┌─────────┬─────────┐
//  │ (index) │ Values  │
//  ├─────────┼─────────┤
//  │    0    │  'Cat'  │
//  │    1    │  'Dog'  │
//  │    2    │ 'Lion'  │
//  │    3    │ 'Horse' │
//  └─────────┴─────────┘


// ------------------------------------------------------------------------------------------------//

// How to Clone an Array with the Different Address 


// Changes in Array will not be reflected in the Cloned Array
// Changes in Array1 will be reflected in the Array2
// Changes in Array2 will be reflected in the Array1

// Method 1:  
// let animal1 = ["Cat", "Dog", "Cow", "Horse"];
// let animal2 = ['Cat', 'Dog', 'Cow', 'Horse'];

// Both Arrays are Equal and Same But They are Different Address
// console.log(animal1 === animal2); // false
// console.table(animal1 == animal2); // false
// console.log(animal1 === animal2); // false

// Method 2:
// let animal1 = ["Cat", "Dog", "Cow", "Horse"];
// let animal2 = animal1.slice(0); // This is the Cloning of the Array
// console.log(animal2); // Cat , Dog , Cow , Horse
// console.table(animal1 == animal2); // false
// console.log(animal1 === animal2); // false
// Both Arrays are Equal and Same But They are Different Address

// Method 3:
// let animal1 = ["Cat", "Dog", "Cow", "Horse"];
// let animal2 = [].concat(animal1); // This is the Cloning of the Array
// console.log(animal2); // Cat , Dog , Cow , Horse
// console.table(animal1 == animal2); // false
// console.log(animal1 === animal2); // false
// Both Arrays are Equal and Same But They are Different Address

