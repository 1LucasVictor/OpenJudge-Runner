#include<stdio.h>

int main()
{
	int a,b;
	char op;
	int ans[1000];
	int i=0,count=0;
	
	while(1){
		scanf("%d %c %d",&a,&op,&b);
		
		if(op == '?') break;
		
		switch(op){
			case '+':
				ans[i] = a + b;
				break;
			case '-':
				ans[i] = a - b;
				break;
			case '*' :
				ans[i] = a * b;
				break;
			case '/' :
				ans[i] = a / b;
				break;
			default:
				break;
		}
		count++;
		i++;
	}
	
	for(i=0;i<count;i++) printf("%d\n",ans[i]);
				
	return 0;
}
		

