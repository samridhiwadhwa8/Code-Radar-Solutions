// Your code here...
#include <stdio.h>
int find(int arr[], int n){
    int c=arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==c){
            count++;
        }else{
            count--;
            if(count==0){
                c=arr[i];
                count=1;
            }
        }
    }
    return c;
}
int f(int arr[], int n, int c){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==c){
            count++;
        }
    }
    return (count> n/2);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0i<n;i++){
        scanf("%d",arr[i]);
    }
    int c =find(arr,n);
    if(f(arr,n,c)){
        printf("%d",c);
    }else{
        printf("-1");
    }
}