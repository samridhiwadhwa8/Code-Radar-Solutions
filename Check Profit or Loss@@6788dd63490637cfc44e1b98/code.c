#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a-b>=1){
        printf("Profit");
    }else if(a-b==0){
        printf("No Profit No Loss");
    }else{
        printf("Loss");
    }
    return 0;
}