#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b||a==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}