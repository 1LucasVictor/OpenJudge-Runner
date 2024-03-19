#include <stdio.h>
#include <time.h>

int main(){
	char a[100000];
	int x[100000];
	int count=0;
	
	scanf("%s",a);
	
	
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='0'){
			count++;
		}
	}
	
	if(strlen(a)-count < count){
		count = strlen(a)-count;
	}
	
	printf("%d",count*2);
	
	return 0;
}