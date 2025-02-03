#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    long int a;
    scanf("%li",&a);
    if(a | 0){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}