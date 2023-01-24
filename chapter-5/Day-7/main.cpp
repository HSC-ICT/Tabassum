#include <bits/stdc++.h>
using namespace std;

const int Nmax = 100001;
bool isPrime[Nmax];

void seiveOfEratosthenes(int n){
    for(int i = 2; i <= n; i++)
        isPrime[i] = true;

    for(int i = 2; i <= n / 2; i++)
        if(isPrime[i] == true)
            for(int j = i * 2; j <= n; j += i)
                isPrime[j] = false;
}

int main(){
    long long n;
    cin >> n;
    seiveOfEratosthenes(n);
    
    if(isPrime[n] == true)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
    return 0;
}