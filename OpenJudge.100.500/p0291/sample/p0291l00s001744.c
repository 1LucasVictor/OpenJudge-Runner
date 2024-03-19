#include <stdio.h>
#define N 2000000
int main(void){
    int n,i,a[N],j,max=0;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    max=a[1]-a[0];
    for(i=0;i<n;i++)
        for(j=i-1;j>=0;j--){
            if(a[i]-a[j]>max){
                max=a[i]-a[j];
            }
        }
    printf("%d\n",max);
    return 0;
}