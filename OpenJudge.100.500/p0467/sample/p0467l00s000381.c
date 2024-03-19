#include <stdio.h>

 
 
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
			
		}
	}

printf("%d",count);
	return 0;
}