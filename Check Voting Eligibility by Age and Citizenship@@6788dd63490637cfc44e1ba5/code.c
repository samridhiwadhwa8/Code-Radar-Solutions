#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int age,c;
    scanf("%d",&age);
    scanf("%d",&c);
    if(age>=18){
        if(c==1){
            printf("Eligible");
        }
        if(c==0){
            prinf("Not Eligible");
        }
    }else{
        printf("Not Eligible");
    }
    return 0;
}