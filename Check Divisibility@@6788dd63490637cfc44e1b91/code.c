#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n%5==0 && n%7==0){
        printf("Divisble");
    }else{
        printf("Not Divisible");
    }
}