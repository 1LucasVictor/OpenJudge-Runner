#include <stdio.h>

int main(){
	char a[200001],b[200001];
	scanf("%s %s",&a,&b);
	int i,count=0;
	for(i=0;;i++){
		if(a[i]=='\0') break;
		if(a[i]!=b[i]) count++;
	}
	printf("%d\n",count);
	return 0;
}