#include <stdio.h>
#define N 200003
int main(void){
    int n,i,a[N],j,max=0;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        for(j=i;j>=0;j--){
            if(a[i]-a[j]>max)
                max=a[i]-a[j];
        }
    
    printf("%d",max);
    return 0;
}