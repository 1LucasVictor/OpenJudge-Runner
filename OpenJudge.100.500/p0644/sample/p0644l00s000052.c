#include<stdio.h>
int main(void){
	char s[3];
	int i,b=0;
	for(i=0;i<3;i++){
		scanf("%c",&s[i]);
		if(s[i]=='1'){
			b++;
		}
	}
	printf("%d\n",b);
	return 0;		
}