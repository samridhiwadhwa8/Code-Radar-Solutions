// Your code here...
#include <stdio.h>
int fibonacciSeries(int n){
    while(n==1 || n==0){
        return 0; 
    }
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}