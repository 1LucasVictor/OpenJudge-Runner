#include<stdio.h>
int main(void)
{
	int x,y,i;
	char op;
	for(i=0;;i++){
	scanf("%d %c %d",&x,&op,&y);
	if ( op == '+')
		printf("%d\n",x+y);
	else if (op == '-')
		printf("%d\n",x-y);
	else if (op =='*')
		printf("%d\n",x*y);
	else if(op =='/')
		printf("%d\n",x/y);
	else
		break;
	}
	return 0;
}