#include <stdio.h>
 
int main()
{
  int N[6];
  int i = 0;
  while (i < 6)
  {
  	scanf("%d",&N[i]);
    i++;
  }
  i = 0;
  while (i < 5)
  {
    //printf("%d",N[i]-N[0]);
  	if (N[i] - N[0] > N[5])
    {
  		printf(":(");
      	return (0);
    }
    i++;
  }
  printf("Yay!");                                     
}