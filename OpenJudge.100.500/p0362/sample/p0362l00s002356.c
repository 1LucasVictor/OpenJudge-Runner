#include <stdio.h>
int main(void){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);

int min=a;
if(a<b&&b<c)printf("Yes\n");
else printf("No\n");
return 0;
}