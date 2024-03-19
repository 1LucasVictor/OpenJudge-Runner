#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a,b,i,count,result[10000];
	char op[2];
	for(i=0;;i++){
		scanf("%d",&a);
		scanf("%s",op);
		scanf("%d",&b);

		if(op[0] == '?'){
			count = i;
			break;
		}
		else if(op[0] == '+')
			result[i] = a + b;
		else if(op[0] == '-')
			result[i] = a - b;
		else if(op[0] == '*')
			result[i] = a * b;
		else if(op[0] == '/')
			result[i] = a / b;
	}

	for(i=0;i<count;i++)
		printf("%d\n", result[i]);

	return 0;
}
