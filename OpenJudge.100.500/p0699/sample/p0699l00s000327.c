#include <stdio.h>
int main()
{
    int n,a,b,c,five=0,seven=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a==5)five++;
    if(a==7)seven++;
    if(b==5)five++;
    if(b==7)seven++;
    if(c==5)five++;
    if(c==7)seven++;
    if(five==2&&seven==1){
        printf("YES");
    }else printf("NO");
    return 0;
}
