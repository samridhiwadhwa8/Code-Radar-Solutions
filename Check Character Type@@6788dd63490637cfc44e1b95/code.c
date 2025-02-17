#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c", &ch);
    ch=tolower(ch);
    if(isalpha(c)){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }}
    else if(isdigit(c)){
        printf("Digit");
    }else{
     printf("Special Character");
    }
}