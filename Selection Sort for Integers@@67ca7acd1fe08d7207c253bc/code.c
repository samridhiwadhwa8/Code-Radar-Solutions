// Your code here...
#include <stdio.h>
int selectionSort(int arr[] ,int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
}
int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}