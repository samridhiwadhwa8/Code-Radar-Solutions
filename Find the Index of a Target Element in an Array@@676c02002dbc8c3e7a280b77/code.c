// Your code here.
#include <stdio.h>
int linearsearch(int n,int arr[],int target){
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
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int res=linearsearch(n,arr,target);
    if(res==-1){
        printf("-1");
    }
    else{
        printf("%d",res);
    }
}
