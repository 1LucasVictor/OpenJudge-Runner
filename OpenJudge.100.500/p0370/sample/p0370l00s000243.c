#include<stdio.h>

int main()
{
    int a, b, i;
    char op;
    for(i = 1;;i++){
        scanf("%d %c %d", &a, &op, &b);


	if(op == '+')a+=b;
	
	if(op == '-')a-=b;
  
	if(op == '*')a*=b;
 
	if(op == '/')a/=b;

	if(op == '?')break;
        printf("%d\n", a);

        }
    return 0;
}
