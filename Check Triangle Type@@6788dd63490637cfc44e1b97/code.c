#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a==b && a==c){
        printf("Equilateral");
    }
    else if((a!=b && a!=c)&&(b!=c &&b!=a)){
        printf("Scalene");
    }
    else{
        printf("Isosceles");
    }
    return 0;
}