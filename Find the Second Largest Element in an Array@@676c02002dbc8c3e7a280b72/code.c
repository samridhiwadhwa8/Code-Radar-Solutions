// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 &&arr[i]<max1){
            max2=arr[i];
        }
    }
    if(max2==INT_MIN){
        printf("-1");
    }
    else{
        printf("%d",max2);
    }

}