#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	char num[3];
	int cont=0;
	scanf("%s", num);
	for(int i=0; i<3; ++i){
		if(num[i]=='7')
			cont=1;
	}
	if(cont==1)
		printf("Yes");
	else
		printf("No");
	printf("\n");

    return 0;
}