// Your code here...
#include <stdio.h>
int searchInRotatedArray(int n, int arr[], int target){
    for(int i=0;i<=n;i++){
        if(arr[i]==target){
            return i;
        }
        return -1;
    }
}