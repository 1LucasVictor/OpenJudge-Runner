#include<stdio.h>

int main()
{
	int a,b,i = 0,judge = 0;
	char op;
	int ans[100];
	while(1){
		scanf("%d %c %d",&a,&op,&b);
		switch(op){
			case '+':
				ans[i]=a+b;
				break;
			case '-':
				ans[i]=a-b;
				break;
			case '*':
				ans[i]=a*b;
				break;
			case '/':
				ans[i]=a/b;
				break;
			case '?':
				judge = 1;
			default:
				break;
		}
		if(judge==1)break;
		i++;
	}

	for(a=0;a<i;a++){
		printf("%d\n",ans[a]);
	}

	return 0;

}