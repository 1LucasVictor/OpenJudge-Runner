#include<stdio.h>

int main(){
  
  int n, i ,s = 0, temp[45];
  
  scanf("%d",&n);

  for(i = 1; i <= n; i++)
    {
      if(i == 1|| i == 2)
	{
	  s++;
	  temp[i] = s;
	}
      else 
	{
	  s = temp[i - 1] + temp[i - 2];
	  temp[i] = s;
	}
    }

  printf("%d\n",s);
 
  return 0;
}

