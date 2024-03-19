#include <stdio.h>
int main(){
	int a[100],b[100],i=0,j;
	char op[100];

	while(1){
		scanf("%d %c %d",&a[i],&op[i],&b[i]);
		if(op[i]=='?')
			break;
		i++;
	}
	for(j=0;j<i;j++){
		if(op[j]=='+')
			printf("%d",a[j]+b[j]);
		else if(op[j]=='-')
			printf("%d",a[j]-b[j]);
		else if(op[j]=='*')
			printf("%d",a[j]*b[j]);
		else if(op[j]=='/')
			printf("%d",a[j]/b[j]);
		printf("\n");
	}	
	return 0;
}