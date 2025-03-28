// Your code here...
#include <stdio.h>
int isPrime(int n){
    int a=0;
    if (n <= 1) return 0;
    if (n == 2) return 1;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
        return 0;
        }
        }
        return 1;
    }
