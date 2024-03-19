#include <stdio.h>

int main(){
	char a[4];
	if(scanf("%s",a)==EOF){return 0;}
	for(int i=0; i<3; i++){
		if(a[i]=='7'){printf("Yes\n"); return 0;}
	}
	printf("No\n");
	return 0;
	
}