#include<stdio.h>
int main()
 {int s=0,a[6],i,j=0;
  for(i=0;i<=5;i++)
   {  scanf("%d",&a[i]);
		if(i<5)
        {
		if(a[i]>j)
		j=a[i];
		}
   }
   for(i=0;i<5;i++)
   {
   if(j<=(a[5]+a[i]))
		s++;
	 else 
	 break;
	}
  
if(s==5)
	printf("Yay!\n");
	else
	printf(":(\n");
 return 0;
 }