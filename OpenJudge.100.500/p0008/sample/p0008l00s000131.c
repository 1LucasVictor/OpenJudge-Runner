#include<stdio.h>

int Isprime(int a);

int main()
{
  int area[1000000];
  int n,count,i,j;

  area[2]=2;
  for (i=3;i<=1000000;i+=2)
	{
	  if(Isprime(i) == 1)
	  area[i]=i;
	}


  while(scanf("%d",&n) != EOF)
    {
      if(n<2)
	count=0;
      else if(n>=2)
	{
	  count=1;
      for(j=3;j<=n;j+=2)
	{
	  if(area[j] == j)
	    count++;
	    }
	}

      printf("%d\n",count);
    }
     return 0;
}

int Isprime(int n){
    int i;
  
    if(n < 2)
        return 0;
    else if(n == 2)
        return 1;
  
    if(n % 2 == 0)
        return 0;
  
    for(i = 3; i * i <= n; i += 2)
         if(n % i == 0)
            return 0;
    return 1;
}