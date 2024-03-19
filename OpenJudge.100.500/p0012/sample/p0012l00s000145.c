#include <stdio.h>

int main()
{
	int ikidomari[100];
	int out[100];
	int i=0,k=0;
	while(scanf("%d", &ikidomari[i])!=EOF){
		if(ikidomari[i]!=0){
			i++;
		}
		else{
			i--;
			out[k]=ikidomari[i];
			k++;
		}
	}
	for(i=0; i<k; i++){
		printf("%d\n", out[i]);
	}
	return 0;
}