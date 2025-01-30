#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    int sum=a+b;
    int div=a/b;
    int mul=a*b;
    int sub=a-b;
    switch(c){
        case '+':
        printf("%d",sum);
        break;
        case '-':
        printf("%d",sub);
        break;
        case '*':
        printf("%d",mul);
        break;
        case '/':
        printf("%d",div);
        break;
        default:
        printf("Error");
    }
    return 0;
}