let i, j, n;

n = 5;

for (i = 1; i <= n; i++) {
    for(j = 1; j <= n - i; j++) {
        console.log(" ");
    }
    for(j = 1; j <= i; j++) {
        console.log("*");
    }
    console.log("\n");
}