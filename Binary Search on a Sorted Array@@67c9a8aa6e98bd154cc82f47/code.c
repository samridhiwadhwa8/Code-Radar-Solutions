// Your code here...
#include <stdio.h>
int binarysearch(arr,n,target){
    for( int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
}