#include<stdio.h>
#include<math.h>

int main(){

  int i, j, cnt = 0, n, flag, num;

  scanf("%d",&n);

  for(i = 0; i < n; i++)
    {
      flag = 0;
      scanf("%d",&num);
      for(j = 2; j * j <= num; j++)
	{
	  if(num % j == 0)
	    {
	      flag = 1;
	      break;
	    }
	}
      if(flag != 1)cnt++;
    }
  printf("%d\n",cnt);
  return 0;
}

