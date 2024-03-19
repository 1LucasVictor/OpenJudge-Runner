#include<stdio.h>
int main()
{
	char x[5];
	x[4]=0; x[5]=0; x[6]=0;
	scanf("%s",x);
	for(int i=0;i<=3;i++){
		if(x[i]==x[i+1] ||x[i]==x[i+2] || x[i]==x[i+3]){
		printf("Yes\n");
		}else{
		printf("No\n");
		}
		return 0;
	}
}
