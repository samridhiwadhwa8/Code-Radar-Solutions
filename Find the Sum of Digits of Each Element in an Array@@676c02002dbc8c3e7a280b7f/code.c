#include <stdio.h>
#include <stdlib.h>
int sumof(int n){
    n=abs(n);
    int sum=0;
    if(n==0){
        return 0;
    }
    return (n%10)+sumof(n/10);
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