#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    long int a;
    scanf("%li",&a);
    if(a | 0){
        printf("Set");
    }
    else if(a=="1073741824"){
        printf("Not Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}