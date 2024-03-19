#include  <stdio.h>
int main (void)
{
	int i = 0,j = 0,a = 0,b = 0,c = 0,e = 0,yn[200];
	
	scanf("%d",&i);
	for(j = 0;j < i;j++){
		scanf("%d %d %d",&a,&b,&c);
		if(a > c){
			c = e; a = c; a = e;
		}
		if(b > c){
			c = e; b = c; b = e;
		}
		
		if(a * a + b * b == c * c){
			yn[j] = 1;
		}
		else{
			yn[j] = 0;
		}
	}
	
	for(j = 0;j < i;j++){
		if(yn[j])
			puts("YES");
		else
			puts("NO");
	}
	

	return(0);
}