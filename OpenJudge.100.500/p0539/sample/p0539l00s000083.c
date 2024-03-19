#include<stdio.h>

int main(){
	int a=0;
	
	scanf("%d",&a);
	for (int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++){
			if(a==i*j) {
				printf("Yes");
			return 0;
			}
			
		}
	}
	 printf("No");
	return 0;
} 