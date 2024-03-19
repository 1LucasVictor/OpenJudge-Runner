#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	char palavra1[200001], palavra2[200001];
	int cont=0;
	scanf("%s %s", palavra1, palavra2);
	
	for(int i=0; i < strlen(palavra1); ++i){
		if(palavra1[i]!= palavra2[i])
			cont++;

	}
	printf("%d\n", cont);

	return 0;
}