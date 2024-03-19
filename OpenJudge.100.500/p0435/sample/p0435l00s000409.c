#include <stdio.h>

double kyori(double x, double y)
{
	return  	x * x + y * y;
}

int main(void)
{
  	int n;
  	int d;
  	int x[200002];
  	int y[200002];
  	int	i;
  	int cnt;
  	double dd;
  
  	scanf("%d %d\n", &n, &d);
  	for(i=0; i<n; i++)
    {
      	scanf("%d %d\n", &x[i], &y[i]);
    }
  	
  	cnt = 0;
  	dd = (double)d * d;
  	for(i=0; i<n; i++)
    {
      	if(dd >= kyori(x[i], y[i]))
          	cnt++;
    }
  
  	printf("%d", cnt);
  	return (0);
}