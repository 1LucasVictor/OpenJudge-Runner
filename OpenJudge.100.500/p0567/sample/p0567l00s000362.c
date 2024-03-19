#include <stdio.h>
int main(void){
int A,B,C,ans;
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&C);
if((C-(A-B))>0)
{
	ans=C-(A-B);
}
else
{
	ans=0;
}
printf("%d",ans);

return 0;
}