// let stu1 = "Bushra";
// let stu2 = "Ali";
// let stu3 = "Ahmed";
// let stu4 = "Sara";
// let stu5 = "Hassan";
// let stu6 = "Hussain";
// let stu7 = "Sami";

// console.log(stu1);
// console.log(stu2);
// console.log(stu3);
// console.log(stu4);
// console.log(stu5);

let arr = ["Bushra", "Ali", "Ahmed", "Sara", "Hassan", "Hussain", "Sami", "Tabassum", "Sana", "Sadia"];
console.log(arr[0]);
console.log(arr[1]);
console.log(arr[6]);

arr.push("Maruf");
arr.pop();

console.log(arr);

for(let i = 0; i < arr.length; i++){
    if(arr[i] == "Tabassum"){
        console.log("Tabassum is found");
    }
}

// define a array with 100 numbers
let nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100];

// print all even numbers
for(let i = 0; i < nums.length; i++){
    if(nums[i] % 2 == 0) {
        console.log(nums[i]);
    }
}
// print even numbers from 2-50
for(let i = 0; i < nums.length / 2; i++){
    if(nums[i] % 2 == 0) {
        console.log(nums[i]);
    }
}
// print even numbers from 2-50
for(let i = 0; i < nums.length; i++){
    if(nums[i] % 2 == 0) {
        console.log(nums[i]);
    }
    if(nums[i] == 50) {
        break;
    }
}

