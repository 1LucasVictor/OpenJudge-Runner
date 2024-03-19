#include<stdio.h>

int main(void)
{
	int i;
	int no;
	int v[100];
	
	scanf("%d",&no);
	for(i=0;i<no;i++){
		scanf("%d",&v[i]);
	}
	for(i=no;i>0;i--){
		printf("%d",v[i-1]);
		if(i == 1){
			break;
		}
		printf(" ");
	}
	printf("\n");
	return 0;
}