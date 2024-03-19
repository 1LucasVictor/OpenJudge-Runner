#include <stdio.h>
int main(void){
    // Your code here!
    long int h,a[100000],n;
    int g;
    scanf("%ld%ld",&h,&n);
    for(int i=0;i<n;i++)scanf("%ld",&a[i]);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                g=a[i];
                a[i]=a[j];
                a[j]=g;
            }
        }
    }
    for(int i=0;i<n;i++)h-=a[i];
    if(h<=0)printf("Yes\n");
    else printf("No\n");
    return 0;
}