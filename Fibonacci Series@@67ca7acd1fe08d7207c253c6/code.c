// Your code here...
#include <stdio.h>
int fibonacciSeries(int n){
    int a=0;
    int b=1;
    printf("%d",b);
    if(n==1){
        return;
    }
    printf("%d",a);
    for(int i=3;i<=n;i++){
        int c=a+b;
        b=a;
        a=c;
        printf("%d",c);
    }
}