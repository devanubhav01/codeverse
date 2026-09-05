// let obj = {
//     a: 1,
//     b:"Groot"
// }

// console.log(obj)

// let animal = {
//     eats: true
// };
// let rabbit = {
//     jumps: true
// };

//   rabbit._proto_ = animal;


class Animal{
    constructor(name) {
        this.name=name
         console.log("Object is created...")
    }
    
    eats() {
        console.log("kha raha hoon");
    }
    jumps() {
        console.log("kood raha hoon");
        
    }
}

class Lion extends Animal{
    constructor(name) {
        super(name)
       
        console.log("Object is created and he is a lion...")
    }

    eats() {
        super.eats()
        console.log("kha raha hoon roar");
    }
}

let a = new Animal("Bunny")
console.log(a)

let l = new Lion("Sher")
console.log(l)
