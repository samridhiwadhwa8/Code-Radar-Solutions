#include <stdio.h>
int main() {
    int n,num;
    scanf("%d %d",&n,&num);
    int nthbit=(num>>n)&1;
    printf("%d",nthbit);
    return 0;
}