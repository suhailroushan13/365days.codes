// Bitwise Left Shift 

let a = 10;
let b = 2;


// Left Shift Operator <<
// Formula a<<b = a * 2^b
// Remove from Left And Add In Right
// a = 10 = 0000 1010
// b = 2 =  0000 0010
 // 1. Remove from left
 // 2. But how much ? check the b value ...remove the 2 digits and add the 2 digits to right
 
    // 0000 1010 = > 00 1010
    // 0000 1000
     
    // 0000 1000 = 40

console.log(a << b); 


// Right Shift Operator >>
// Formula a>>b = a / 2^b 
// Remove from Right And Add In Left
// a = 10 = 0000 1010
// b = 2 =  0000 0010
    // 1. Remove from right
    // 2. But how much ? check the b value ...remove the 2 digits and add the 2 digits to left
    // 3. If 1 is MSB then its negative
    // 4. If 0 is MSB then its positive

    // 0000 1010 = > 00 1010
    // 0000 1000

    // 0000 1000 = 40

    console.log(a >> b);
    