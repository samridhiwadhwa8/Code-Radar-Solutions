#include <stdio.h>
#include <stdbool.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

// bool isPrime(int number){
//     if(number <=1){
//         return false;
//     }
//     for(int i=2;i*i<=number;i++){
//         if(number%i==0){
//         return false;
//         }
//     }
//     return true;
// }
int main(){
    // int num;
    // scanf("%d",&num);
    // if(isPrime(num)){
    //     printf("Prime");
    // }else{
    //     printf("Not Prime");
    // }
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n % i==0){
            a=1;
            break;
        }
    }if(a==0){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}