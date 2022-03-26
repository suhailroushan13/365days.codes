var box = [
  "spray",
  "limit",
  "exuberant",
  "destruction",
  "elite",
  "present",
  "apple",
];
var result = [];
box.forEach((start) => {
    result.push(start[0].toUpperCase() + start.substring(1));
    // console.log(start);
    
})
console.log(result);
