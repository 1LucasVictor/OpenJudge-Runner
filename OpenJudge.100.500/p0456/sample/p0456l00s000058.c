#include <stdio.h>

int main(void){
	char a[200001];
  	char b[200001];
  	int i,count;
  	scanf("%s",a);
  	scanf("%s",b);
  	count=0;
  	for(i=0;a[i]!='\0';i++){
    	if(a[i]!=b[i]){
        	count++;
        }
    }
  	printf("%d",count);
}