// Your code here.
#include <stdio.h>
int linearSearch(int n,int arr[], int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int taregt;
    scanf("%d",&target);
    int result=linearSearch(n,arr,target);
    printf("%d",result);
    }
