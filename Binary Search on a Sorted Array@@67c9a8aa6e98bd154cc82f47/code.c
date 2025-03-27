// Your code here...
#include <stdio.h>
int binarySearch(int arr[],int n,int target){
    int mid,l=0,r=n-1;
    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}