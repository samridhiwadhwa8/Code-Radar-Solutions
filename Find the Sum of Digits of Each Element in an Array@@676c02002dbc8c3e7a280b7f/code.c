#include <stdio.h>
#include <stdlib.h>
int sumof(int n){
    n=abs(n);
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    int dig;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        dig=sumof(arr[i]);
        printf("%d ",dig);
    }
    
}