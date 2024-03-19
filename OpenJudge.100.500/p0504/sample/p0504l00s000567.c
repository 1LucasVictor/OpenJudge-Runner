#include<stdio.h>
#include<string.h>
#include<math.h>
#define rep(i,n) for(i=0; i<n; i++)

int main(void)
{
	int h, a, i=0;
	scanf("%d%d", &h, &a);
	while(h > 0){
		h -= a;
		i++;
	}
	printf("%d", i);
	return 0;
}