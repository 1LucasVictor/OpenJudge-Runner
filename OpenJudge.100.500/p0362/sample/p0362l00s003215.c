#include <stdio.h>

int main(void)
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a < b && b < c){
printf("Yes\n");
}
else if(a < b && b > c){
printf("No\n");
}

return 0;
}