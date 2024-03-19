#include <stdio.h>
int main(void){
    int h, n, i, a[1000];
    
    scanf("%d%d",&h, &n);
    for(i=1;i<=n;i++) {scanf("%d",&a[i]);}
       
    for(i=1;i<=n;i++) {h=h-a[i];}
    
    if(h<=0) printf("Yes\n");
    else printf("No\n");
    
    return 0;
}