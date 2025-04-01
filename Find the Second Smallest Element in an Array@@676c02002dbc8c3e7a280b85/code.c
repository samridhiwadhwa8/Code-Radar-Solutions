#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min1=arr[0];
    int min2=100000;
    for(int i=0;i<n;i++){
        if(arr[i]<min1){
            min1=min2;
            min2=arr[i];
        }
        else if(arr[i]<min2 && arr[i]>min1){
            min2=arr[i];
        }    }
        if(min2==min1||min2==100000){
            printf("-1");
        }else{
            printf("%d",min2);
        }
}
