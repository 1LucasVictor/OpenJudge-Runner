#include <stdio.h>

int main(){
	int a,b,c;
	int N,i;

	scanf("%d",&N);
	for(i=0; N-i!=0; i++){
		scanf("%d %d %d",&a,&b,&c);
			if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b)){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
	}
}