#include <stdio.h>
#include <string.h>

int main(void)
{
	int a;
	int b;
	int c;
	char zy[100];
	scanf("%d%d%d",&a,&b,&c);
	if(c-b<1){
		strcpy(zy,"delicious");	
	}else if(c-b-a<1){
		strcpy(zy,"safe");	
	}else{
		strcpy(zy,"dengerous");	
	}
	printf("%s\n",zy);
        return 0;
}