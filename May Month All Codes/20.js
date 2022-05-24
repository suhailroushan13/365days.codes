// Objects

const obj = {
  name: "John",
  age: 30,
  isAdmin: true,
  email: "jhon@gmail.com",
  phone: "+380991234567",
  gender: "male",
  rank: 574985789347589475974897n,
  // null is an object ..mistake of js ..1st bug in JS
  test: null,
  arr: ["1", "2"],
  un: undefined,
  arr2: [
   hello = {
      test:'Hello'
    },
  ], // array is also an object
};

// console.log(obj);
console.log(typeof obj);
console.log(typeof obj.age);
console.log(typeof obj.name);
console.log(typeof obj.test);
console.log(typeof obj.rank);
console.log(typeof obj.isAdmin);
console.log(typeof obj.un);
console.log(typeof obj.arr);
console.log(obj.arr2);
