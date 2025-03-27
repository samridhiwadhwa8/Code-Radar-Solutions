// Your code here...
#include <stdio.h>
int factorial(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact *=i;
    }
    return fact;
    }
void factorialRange(int L, int R){
    if(L>R || L<0){
        printf("Invalid Range");
    }
    for(int i=L;i<=R;i++){
        printf("%d\n",factorial(i));
    }
}