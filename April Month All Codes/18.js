// BITWISE OPERATOR
// AND &, OR |,XOR ^, NOT~
let a = 10;
let b = 2;
// AND TABLE
// X   Y     X &Y
// 0   0       0
// 0   1       0
// 1   0       0
// 1   1       1

// Binary of a = 10 ==> 1010
// Binary of b = 2 ===> 0010
// Use and table -------------
//                      0010 ===> Decimal is 2
console.log(a & b); // 2

// BITWISE OR |
// X   Y     X | Y
// 0   0       0
// 0   1       1
// 1   0       1
// 1   1       1

// Binary of a = 10 ==> 1010
// Binary of b = 2 ===> 0010
// Use and table -------------
//                      1010 ===> Deicmal of 10
// 

console.log(a | b); // 10


// BITWISE XOR 
// X   Y     X ^ Y
// 0   0       0
// 0   1       1
// 1   0       1
// 1   1       0
// Binary of a = 10 ==> 1010
// Binary of b = 2 ===> 0010
// Use and table -------------
//                      1000
console.log(a ^ b); // 8


//BITWISE NOT ~
//    X   Y 
// X  0   1
// Y  1   O

// True ==> False
// False ==> True
// 
// ~10 == -11
// ~n = -(n+1)
console.log(~b); // -3
console.log(~a); // -11



// LEFT SHIFT <<
//Formula for << shift
// a<<b = a*(2^b)
console.log(a << b); // 10 * 2 ^ 2 ===> 10*4 = 40


// RIGHT SHIFT >>
// Formula for >> shift
// a>>b = a/(2^b)
console.log(a >> b); // 10 / 2 ^2 ==> 10/4 ==> 2




