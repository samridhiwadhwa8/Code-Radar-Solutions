#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a>=0 && b>=0){
        printf("False");
    }
    else if(a<=0 && b>=0){
        printf("True");
    }else if((a>=0 && b<=0)||(a<=0 && b>=0)){
        printf("True");
    }
    return 0;
}