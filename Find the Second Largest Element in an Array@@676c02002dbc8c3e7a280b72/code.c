#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],max1,max2;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        int max=arr[0],min=-100000;
        for(int i=0;i<n;i++){
            if(arr[i]>=max){
                max=min;
                min=arr[i];
                arr[i]=max;
            }
            else if(arr[i]>max,max<min){
                min=arr[i];
            }
        }
        if(max==min||min==-100000){
            printf("-1");
        }else{
            printf("%d",min);
        }
    }
