#include <stdio.h>
#include <string.h>

int main(void)
{
	long long int a;
	long long int b;
	long long int c;
	char zy[100];
	scanf("%llu %llu %llu",&a,&b,&c);
	if(c-b<1){
		strcpy(zy,"delicious");	
	}else if(c-b-a<1){
		strcpy(zy,"safe");	
	}else{
		strcpy(zy,"dengerous");	
	}
	printf("%s\n",zy);
}