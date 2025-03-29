// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }int min1=arr[0];
    int min2=100000;
    for (int i = 1; i < n; i++) {
        if (arr[i] > min1) {
            min2 = min1;  // Update second largest to previous max
            min1 = arr[i];  // Update largest
        } else if (arr[i] > min2 && arr[i] < min1) {
            min2 = arr[i];  // Update second largest if valid
        }
    }

    // Handle case when max2 is not updated (all elements are the same)
    if (min1 == min2 || min2 == 1000000) {
        printf("-1");
    } else {
        printf("%d\n", min2);
    }

    return 0;
}
