#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<=(n-1);i++){
        for(int j=i;j<=(n-1);j++){
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}