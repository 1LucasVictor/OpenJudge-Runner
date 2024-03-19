#include <stdio.h>
#include <string.h>

int main()
{
	int N;
	scanf("%d",&N);
	for(int i=1;i<10;i++){
		if(N%i==0&&N/i<10){
			printf("Yes\n");
			break;
		}else if(i==9){
			printf("No\n");
		}
	}
}

