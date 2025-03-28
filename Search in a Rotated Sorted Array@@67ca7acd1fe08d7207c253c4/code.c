// Your code here...
#include <stdio.h>
int searchInRotatedArray(int n, int arr[], int target){
    if(n<=0){
        return -1;
    }
    int left=0,right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]> target){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return -1;
}