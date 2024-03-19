#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a[n-1],ans[100000]={0};
    for(int i=0; i<n-1; i++){
        scanf("%d",&a[i]);
        ans[a[i]-1]++;
    }
    for(int i=0; i<n; i++)
        printf("%d\n",ans[i]);
}
