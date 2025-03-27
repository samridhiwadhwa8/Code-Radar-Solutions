// Your code here...
#include <stdio.h>
int factorial(int start,int end){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact *=i;
    }
    return fact;
    }
void factorialRange(int L, int R){
    for(int i=L;i<=R;i++){
        printf("%d",factorial(i));
    }
}