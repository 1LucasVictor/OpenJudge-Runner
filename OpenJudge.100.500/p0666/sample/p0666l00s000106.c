#include <stdio.h>

int main(void)
{
	int a[3];
	char zy[100];
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	if(a[2]-a[1]<1){
		strcpy(zy,"delicious");	
	}else if(a[2]-a[1]-a[0]<1){
		strcpy(zy,"safe");	
	}else{
		strcpy(zy,"dengerous");	
	}
	printf("%s\n",zy);
}