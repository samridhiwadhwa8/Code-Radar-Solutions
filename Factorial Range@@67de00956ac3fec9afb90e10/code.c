// Your code here...
#include <stdio.h>
int factorialRange(int start,int end){
    int fact=1;
    for(int i=start,i<=end;i++){
        fact=i*end;
        printf("%d",fact);
    }

}