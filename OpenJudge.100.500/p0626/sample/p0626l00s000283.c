#include <stdio.h>
int main()
{
  	int d, n;
  	scanf("%d%d", &d, &n);
  
  	switch(d){
      case 1 : n *= 100; break;
      case 2 : n *= 10000; break;
    }
	
	printf("%d\n", n);
  
  	return 0;
}