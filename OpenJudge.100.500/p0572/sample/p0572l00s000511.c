#include<stdio.h>
int main(void)
{int l,r,i,j,k,min,code;
 min=(-1);
 scanf("%d %d",&l,&r);
 for(j=l+1;j<=r;j++)
   for(i=l;i<j;i++)
   { k=(i*j)%2019;
    if(min<0){min=k;code=k;}
    if(min>k)min=k;
    if(k==code){i+=r;j+=r;}
   }
 printf("%d",min);
 return 0;
}