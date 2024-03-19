#include <stdio.h>
int main(void){

int a,b,c,i,j;

scanf("%d %d %d",&a,&b,&c);

for(i=a, j=0; i<=b; i++){
  if(c % i == 0) j++;

}

printf("%d\n",j);

return 0;

}