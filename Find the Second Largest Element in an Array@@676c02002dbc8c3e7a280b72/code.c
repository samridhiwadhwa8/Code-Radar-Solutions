#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],max1,max2;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        max1=arr[0];
        max2=-100000;
        for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
        }
        if(max2==-100000){
            printf("-1");
        }
        else{
            printf("%d",max2);
        }
    }
