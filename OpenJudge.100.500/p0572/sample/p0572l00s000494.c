#include<stdio.h>
int main(void)
{ int l,r,min,k,i,j,code;
 scanf("%d %d",&l,&r);
 min=(-1);
 for(j=l+1;l<r;l++)
 for(i=l;i<j;i++)
   { k=(j*i)%2019;
     if(min<0){min=k;code=k;}
     if(min>k)min=k;
   }
 printf("%d",min);
 return 0;
}