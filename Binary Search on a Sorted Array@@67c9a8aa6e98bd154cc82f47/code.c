// Your code here...
#include <stdio.h>
int binarySearch(int arr[],int n,int target){
    int mid,l=0,r=n-1;
    for( int i=0;i<n;i++){
        if(arr[i]==mid){
            return mid;
        }
        else if(arr[i]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}