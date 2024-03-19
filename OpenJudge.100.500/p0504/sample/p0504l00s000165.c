#include <stdio.h>
int main()
{
	int H,A,count = 0;
	scanf("%d %d",&H,&A);
	while (H > 0){
		H -= A;
		count += 1;
	}
	printf("%d\n",count);
}
