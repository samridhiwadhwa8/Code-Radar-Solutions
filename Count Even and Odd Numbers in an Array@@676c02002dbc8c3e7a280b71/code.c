// Your code here...
#include <stdio.h>
void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("\n");
}
void even_odd(int arr[], int n){
    int count=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2==0){
            count++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d", count , odd);
    }
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    even_odd(arr,n);
    printarr(arr,n);
    return 0;
}

