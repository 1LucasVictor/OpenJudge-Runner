#include<stdio.h>

int n,i,j,k,l,sum[10000],m=0,p;


int main(){
  /*makelist*/
 for(i=0;i<=9;i++)
    {for(j=0;j<=9;j++)
	{for(k=0;k<=9;k++)
	    {for(l=0;l<=9;l++)
		{
sum[m]=i+j+k+l;
 m++;
		}
	    }
	}
    }

 while(scanf("%d",&n) != EOF)
 {
 
 /*search*/
   int q=0;
   for(p=0;p<=10000;p++)
   {if (n == sum[p])
       {q++;
	   }
   }

 printf("%d\n",q);
 }

  return 0;
}