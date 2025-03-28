// Your code here...
#include <stdio.h>
int fibonacciSeries(int n){
    int a=0;
    int b=1;
    printf("%d ",a);
    printf("%d ",b);
    // if(n==1){
    //     return;
    // }
    if(n==1){
        return 0;
    }
    for(int i=3;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}