#include<stdio.h>


int main(){
	int a,b;
	char op;
	int ans;
	
	for(;scanf("%d %c %d",&a,&op,&b),op!='?';){
		switch (op){
			case '+':
				ans=a+b;
				break;
				
			case '-':
				ans=a-b;
				break;
			
			case '*':
				ans=a*b;
				break;
			
			case '/':
				ans=a/b;
				break;
				
			default :
				break;
		}
		printf("%d\n",ans);
	}
	return 0;
}