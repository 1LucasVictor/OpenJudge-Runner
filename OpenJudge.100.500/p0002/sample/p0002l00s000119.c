#include <stdio.h>

int main(void)
{
	int n;
	int a, b, c;
	int aa, bb, cc;
	int i;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		aa = a;
		bb = b;
		cc = c;
		
		if(b >= a && b >= c){
			aa = b;
			bb = a;
		}
		else if(c >= a && c >= b){
			aa = c;
			cc = a;
		}
		
		if((aa * aa) == (bb * bb) + (cc * cc))
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}