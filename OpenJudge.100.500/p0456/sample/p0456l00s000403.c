#include <stdio.h>
int main(){
	char s[200001];
    char t[200001];
  	int count=0;
  	scanf("%s",s);
  	scanf("%s",t);
  	for(int i=0;s[i];i++){
    	if(s[i]!=t[i]) count++;
    }
  	printf("%d\n",count);
}
