// Your code here...
#include <stdio.h>
int fibonacciSeries(int n){
    int a=0;
    int b=1;
    printf("%d",b);
    for(int i=3;i<=n;i++){
        int c=a+b;
        b=a;
        a=c;
        printf("%d",c);
    }
}