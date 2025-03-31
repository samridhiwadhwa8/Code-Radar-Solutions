#include <stdio.h>
int rev(int n, int arr[]){
    for(int i=0;i<n/2;i++){
        int t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],og[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        og[i]=arr[i];
    }
    int res=rev(n,arr);
    if(res==1){
        int isp=1;
        for(int i=0;i<n;i++){
            if(arr[i]!=og[i]){
                isp=0;
                break;
            }
            if(isp){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
    }
}