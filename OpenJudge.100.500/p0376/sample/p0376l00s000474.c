#include <stdio.h>
int main(void)
{
int n,i,a;
int rev[100];

scanf("%d",&n);

for(i=0;i<n;i++)
 scanf("%d",&rev[i]);

for(i=n-1;i>=0;i--){
 if(i==n-1)
   printf("%d",rev[i]);
 else  
   printf(" %d",rev[i]);
}

printf("\n");

return 0;
}