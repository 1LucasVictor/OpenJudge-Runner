#include<stdio.h>
int main(){
    
    int n,i,a[200000],t[200000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        t[i]=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        t[a[i]-1]++;
    }
    for(i=0;i<n;i++)
        printf("%d\n",t[i]);
    return 0;
    
}
