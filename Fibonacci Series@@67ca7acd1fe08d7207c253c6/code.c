// Your code here...
#include <stdio.h>
int fibonacciSeries(int n){
    int a=0;
    int b=1,c;
    
    // printf("%d ",a);
    if(n==1){
        return 0;
    }
    // printf("%d ",b);
    // if(n==1){
    //     return;
    
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}