
function nice(name) {
    console.log("Hey "+name+" you are nice!")
}

nice("groot");
nice("rocket");

function sum(a, b,c=4) {
    // console.log(a+b)
    console.log(a,b,c)
    return a + b+c;
}

result = sum(3, 5);
result2=sum(5,7,9)

console.log("The sum of these numbers is: ",result)
console.log("The sum of these numbers is: ", result2)


const func1 = (x) => {
    console.log("I am an arrow function",x)
}

func1(39);
func1(97);
func1(44);