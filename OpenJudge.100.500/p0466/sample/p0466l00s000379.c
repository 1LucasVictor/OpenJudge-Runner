#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main()
{
	char S[10],T[11];
	
	scanf("%s",S);
	scanf("%s",T);
	
	int i,YorN=0;
	
	for(i=0;i<strlen(S);i++){
		if(S[i]!=T[i]){
			YorN=1;
			break;
		}
	}
	
	if(YorN==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	
	return 0;
}
