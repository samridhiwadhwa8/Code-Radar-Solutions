#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    int p=1;
    for(int i=1;i<=10;i++){
        p=n*i;
        printf("%d x %d = %d\n",n,i,p);
    }
    return 0;
}