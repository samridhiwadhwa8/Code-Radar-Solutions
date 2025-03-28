
#include <stdio.h>
int isPrime(int n){
    if(n<=1)return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
void printPrimesInRange(int a, int b){
    for(int num=a;num<=b;num++){
        if(isPrime(num)){
            printf("%d ",num);
            found =1;
        }
    }
    if(!found){
        printf("No prime numbers");
    }
    printf("\n");
}