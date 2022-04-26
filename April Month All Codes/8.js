const names = "Suhail";
typeof names; // returns "string"

const number = 4;
typeof number; //returns "number"

const valueChecked = true;
typeof valueChecked; //returns "boolean"

const a = null;
typeof a; // returns "object"


console.log(typeof names,typeof number,typeof a,typeof valueChecked);



//Notice that typeof returned "object" for the null type.
//  This is a known issue in JavaScript since its first release.