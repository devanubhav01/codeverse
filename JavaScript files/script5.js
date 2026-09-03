
let a = 0;
for (let i = 1; i < 11; i++){
    console.log(a + i);
}

let obj = {
    "fighter aircraft  name": "F-16 Block 70",
    "generation": "4.5",
    "company":"Lockheed Martin"
}
//for in
for (const key in obj) {
    const element = obj[key];
    console.log(element)
}

//for of

for (const c of "Groot") {
    
    console.log(c)

}


//while

let j = 0;
while (j < 6) {
    console.log(j);
    j++;
}
    

//do while

let k = 10;
do {
    console.log(k);
    k++;
} while (k < 18);
