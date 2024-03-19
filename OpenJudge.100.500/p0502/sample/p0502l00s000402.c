#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int mark[N];
	int a;
	for(a=0;a<N;a++){
		scanf("%d",&mark[a]);
	}
	for(a=0;a<N;a++){
		if(mark[a]%2==0 && mark[a]%3==0 || mark[a]%5==0){
			printf("APPROVED");
		}
		else printf("DENIED");
		break;
	}
   return 0;
}