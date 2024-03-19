#include <stdio.h>

int main()
{
	int ikidomari[10];
	int out[10];
	int i=0,k=0;
	while(scanf("%d", &ikidomari[i])!=EOF){
		if(ikidomari[i]==0){
			i--;
			out[k]=ikidomari[i];
			k++;
		}
		else{
			i++;
		}
	}
	for(i=0; i<k; i++){
		printf("%d\n", out[i]);
	}
	return 0;
}