#include<stdio.h>

int main(void){

int a,x,y,i;

scanf("%d %d %d",&x,&y,&a);

for(i=0;x<=y;x++)
if(a%x==0)
i++;

printf("%d\n",i);

return 0;
}

