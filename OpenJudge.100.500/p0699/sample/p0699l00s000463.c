#include <stdio.h>
int main(void){
    int a,b,c,cnt=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a==5) cnt++;
    if(b==5) cnt++;
    if(c==5) cnt++;
    if(a+b+c==17 && cnt==2)
        printf("YES\n");
    else
        printf("NO\n");
}
