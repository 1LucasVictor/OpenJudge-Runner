#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
#define PI 3.141592653589
#define N_MAX 100

int main()
{
  char buf[N_MAX];
  bool cards[4][13];
  int n,cd, num, i, j, k, l;
  for(i = 0; i < 4; i++)
    {
    for(j = 0; j < 13; j++)
      {
	cards[i][j] = false;
      }
    }
  scanf("%d",&n);
  for(k = 0; k < n; k++)
    {
      scanf("%s %d",buf,&num);
      if(buf[0] == 'S') l = 0;
      else if(buf[0] == 'H') l = 1;
      else if(buf[0] == 'C') l = 2;
      else if(buf[0] == 'D')  l = 3;
      else {printf("error\n"); exit(1);}
      cards[l][num-1] = true;
    }
   for(i = 0; i < 4; i++)
    {
    for(j = 0; j < 13; j++)
      {
	if(cards[i][j] == false)
	  {
	    switch(i)
	      {
	      case 0:
		{
		  printf("S");
		  break;
		}
	      case 1:
		{ 
		  printf("H");
		  break;
		}
	      case 2:
		{
		printf("C");
		break;
		}
	      case 3:
		{
		printf("D");
		break;
		}
	      default: break;
	      }
	    printf(" %d\n",j+1);
	  }
      }
    }
  return 0;
}