// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max1=arr[0];
    int max2=-1000000;
    for(int i=1;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 &&arr[i]<max1){
            max2=arr[i];
        }
    }
    if(max1==max2|| max2=-1000000){
        printf("-1");
    }
    else{
        printf("%d",max2);
    }

}