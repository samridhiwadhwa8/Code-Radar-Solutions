// Your code here...
#include <stdio.h>
int fibonacciSeries(int n){
    int a=0;
    int b=1;
    if(n==1){
        printf("0");
    }
    printf("%d ",a);
    printf("%d ",b);
    // if(n==1){
    //     return;

    for(int i=3;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}