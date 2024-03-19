#include<stdio.h>
int main(){
	char s[4];
	int cont=0;
	scanf("%s", s);
	for(int i=0; i<3; ++i){
		if(s[i]==s[i+1])
			cont=1;
	}
	
	if(cont==1)
		printf("Bad\n");
	else 
		printf("Good\n");

    return 0;
}