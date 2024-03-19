#include <stdio.h>

int main (void)

{
 int n;
 int a[n+1];
int i ,y,count = 0;

scanf("%d",&n);

for(i =0;i<=n;i++)
scanf("%d",&a[i]);

for(i =1;i<=n;i++)
{
for(y=0;y<n;y++)
if(i==a[y])
count ++;
printf("%d\n",count);
count = 0;
}

return 0;
}
