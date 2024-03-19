#include <stdio.h>
#include <string.h>
int main(){
	char a[100],b[100];
	int i,na,nb;
	scanf("%s",a);
	na=strlen(a);
	scanf("%s",b);
	nb=strlen(b);
	
	if(na+1!=nb){
		printf("No\n");
	}else{
		for(i=0;i<na;i++){
			if(a[i]!=b[i]){
				printf("No\n");
				break;
			}
		}
		if(i==na){
			printf("Yes\n");
		}
	}
	
	
	return 0;
}