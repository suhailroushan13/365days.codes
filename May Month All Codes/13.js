let num = 4;
let fac = 1;
let i = 1;
for (i; i <= num; i++)
{
    fac = fac * i;

}

console.log(fac);

while (i <= num)
{
    fac = fac * i;
    i++;
}
console.log(fac);

do {
  i++;
  fac = fac * i;
} while (i < num);

console.log(fac);
