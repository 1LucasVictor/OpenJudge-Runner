#include <stdio.h>

int main(void)
{
	
	int n,m,x,tmp,y;
	
	while(scanf("%d %d", &m, &n) != EOF){
		if(n > m){
			tmp = m;
			m = n;
			n = tmp;
		}
		x = m;
		y = n;
		while(n != 0){
			tmp = n;
			n = m%n;
			m = tmp;
		}
		printf("%d %d\n", m, x/m*y);
	}
	
	return(0);
}