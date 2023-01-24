let a = 3, b = 4, c = 5

let sum = (a + b + c) / 2 // --> true
// sum = a + b + c / 2    --> false

let area = Math.sqrt(sum * (sum - a) * (sum - b) * (sum - c))

console.log(area)