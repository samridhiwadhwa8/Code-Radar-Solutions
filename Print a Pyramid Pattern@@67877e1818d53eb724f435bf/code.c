#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        for(int j=i;j<=n;++j) {
            printf("");
        }
        for(int k=1;k<(i*2+1);k++){
            printf("*");
        }
    }
    return 0;
}