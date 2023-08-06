/* without loop

console.log(2*1);
console.log(2*2);
console.log(2*3);
console.log(2*4);
console.log(2*5);
console.log(2*6);
console.log(2*7);
console.log(2*8);
console.log(2*9);
console.log(2*10); */

for (let i = 1; i <= 10; i++) {
    console.log("2 x " + i + " = " + 2*i);
}

// How to get the best of Arrays/List

let tableArray = [11,24,23,44,5,24,61,7,18,9];

// print
for (let i = 0; i < tableArray.length; i++) {
 const element = tableArray[i];
 console.log(element);
}
console.log('tableArray: ',tableArray);
// remove 24 from tableArray
let table2 = [];
for (let i = 0; i < tableArray.length; i++) {
 const element = tableArray[i];
 if(element != 24) {
     table2.push(element)
 }
}

console.log('Without 24: ',table2);

let x;
x = 9;
x = 'h';