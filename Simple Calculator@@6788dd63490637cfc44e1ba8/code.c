#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    switch(c){
        case '+':
        printf("%d %d",(a+b));
        break;
        case '-':
        printf("%d %d",(a-b));
        break;
        case '*':
        printf("%d %d",(a*b));
        break;
        case '/':
        printf("%d %d",(a/b));
        break;
    }
    return 0;
}