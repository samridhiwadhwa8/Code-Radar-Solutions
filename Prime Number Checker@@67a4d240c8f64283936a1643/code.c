// Your code here...
#include <stdio.h>
int isPrime(int n){
    int a=0;
    if (n <= 1) return 0;
    if (n == 2) return 1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
        a=1;
        break;
        }
        }
        if(a==0){printf("1\n");}
        else {printf("0");}
    }
