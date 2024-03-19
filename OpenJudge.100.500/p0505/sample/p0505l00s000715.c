#include <stdio.h>
 
int main(){
    int h,n;
    scanf("%d%d", &h, &n);
    int a[n],i,p=0;
    for( i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
        p += a[i];
    }
    if(p<h) printf("No\n");
    else printf("Yes\n");
 
    return 0;
}