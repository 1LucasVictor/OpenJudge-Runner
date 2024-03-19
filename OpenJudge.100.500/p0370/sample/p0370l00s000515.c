#include<stdio.h>

int main()
{
		// input value
		int a,b;
		// operator
		char op;
		// answear
		int ans;
		// end check
		int check = 1;


		while(check){
				scanf("%d %c %d", &a, &op ,&b);
				switch(op){

						case '+':
							ans = a + b;
							printf("%d\n",ans);
							break;

						case '-':
							ans = a - b;
							printf("%d\n",ans);
							break;

						case '*':
							ans = a * b;
							printf("%d\n",ans);
							break;

						case '/':
							ans = a / b;
							printf("%d\n",ans);
							break;

						case '?':
							check = 0;

						break;

						default:
							break;
				}

// output 	


		}

		return 0;


}
