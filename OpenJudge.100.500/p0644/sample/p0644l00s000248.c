#include<stdio.h>
int main(void)
{
	char mass[3];
	int i,k=0;
	
	scanf("%s",mass);
	
	for(i=0;i<3;i++){
		if(mass[i]=='1'){
			k++;
		}
	}
	printf("\n%d\n\n",k);
	
	return 0;
}