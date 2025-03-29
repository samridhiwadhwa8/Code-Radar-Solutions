// Your code here...
#include <stdio.h>
int sumof(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
    }
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int dig=sumof(arr[i]);
        printf("%d ",dig);
    }
}