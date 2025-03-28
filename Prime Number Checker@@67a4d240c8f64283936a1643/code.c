// Your code here...
#include <stdio.h>
int isPrime(int n){
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(a==1){
            break;
        }
        if(a==0)printf("1");
        else printf("0");
    }
}