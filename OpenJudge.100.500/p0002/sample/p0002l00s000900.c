#include<stdio.h>
int main(void){
	int a,b,c,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(c*c==a*a+b*b||a*a==b*b+c*c||b*b==a*a+c*c)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}