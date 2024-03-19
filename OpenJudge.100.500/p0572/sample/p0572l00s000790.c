#include<stdio.h>
int main(void)
{ int l,r,min,k,i,j,code;
 scanf("%d %d",&l,&r);
 for(i=l;i<r;i++)
   for(j=l+1;j<=r;j++)
   { k=(i*j)%2019;
    if(i==l){min=k;code=k;}
    if(k<min)min=k;
    if(k==code){i+=r;j+=r;}
   }
 printf("%d",min);
 return 0;
}