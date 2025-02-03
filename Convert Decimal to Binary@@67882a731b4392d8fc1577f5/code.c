#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,c,r;
    scanf("%d",&a);
        r=a>>c;
        if(r&1){
            printf("1");
        }else{
            printf("0");
        }
    printf("\n");
    return 0;
}