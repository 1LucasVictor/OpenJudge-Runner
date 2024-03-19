#include<stdio.h>
int main(){
	int N, i, a, b, c;
	int s[1000];
	scanf("%d",&N);
	for(i=0; i<N*3; i++)
		scanf("%d",&s[i]);
	for(i=0; i<N*3; i+=3){
		a = s[i];
		b = s[i+1];
		c = s[i+2];
		if(a<b+c && b<c+a && c<a+b){
			if(a > b && a > c && a*a == b*b + c*c)
				printf("YES\n");
			else if(b > a && b > c && b*b == a*a + c*c)
				printf("YES\n");
			else if(c > a && c > b && c*c == a*a + b*b)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}