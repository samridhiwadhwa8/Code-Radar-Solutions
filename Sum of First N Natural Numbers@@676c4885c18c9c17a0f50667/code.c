#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int sum;
    sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}