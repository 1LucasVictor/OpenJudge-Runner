#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
 
int main()
 {
	int a,b,c,k;

	scanf("%d %d %d %d",&a,&b,&c,&k);

	int count=0;

	for(int i=0;i<k;i++)
	{
		if(a>0){
			count++;
			a--;
		}
		else if(b>0){
			b--;
		}
		else {
			count--;
			c--;
		}
	}

printf("%d",count);
	return 0;
}