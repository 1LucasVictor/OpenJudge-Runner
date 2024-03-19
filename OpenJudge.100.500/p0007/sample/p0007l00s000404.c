#include<stdio.h>

int main(){

int n,i,j,k,l,sum;

 while(scanf("%d",&n) != EOF)
 {
   sum = 0;
 for(i=0;i<=9;i++)
    {for(j=0;j<=9;j++)
	{for(k=0;k<=9;k++)
	    {for(l=0;l<=9;l++)
		{if(i+j+k+l == n)
		    {sum++;
		    }
		}
	    }
	}
    }
 printf("%d\n",sum);
 }

  return 0;
}