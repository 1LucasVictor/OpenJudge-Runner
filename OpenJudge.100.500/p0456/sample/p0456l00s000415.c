#include <stdio.h>
#include <string.h>

int main(){
	char x[200000], y[200000];
	scanf("%s",&x);
	scanf("%s",&y);
	int l=strlen(x);
	int z=0;
	for(int i=0; i<l; i++){
		if(x[i]!=y[i]) z++;
	}
	printf("%d\n",z);
	return 0;
}