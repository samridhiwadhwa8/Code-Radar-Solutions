#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d", &n);
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
        printf("%d X %d = %d",n,i,p);
    }
    return 0;
}