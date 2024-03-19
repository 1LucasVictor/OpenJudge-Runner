#include<stdio.h>
int main(void)
{
	int a[100];
	int b[100];
	char op[100];
	int i=0;
	int j;
	
	while(1){
		scanf("%d %c %d",&a[i],&op[i],&b[i]);
		if(a[i]==0 && b[i]==0 && op[i]=='?')break;
		i++;
	}
	for(j=0;j<i;j++){
		if(op[j]=='+'){
			printf("%d\n",a[j]+b[j]);
		}else if(op[j]=='-'){
			printf("%d\n",a[j]-b[j]);
		}else if(op[j]=='/'){
			printf("%d\n",a[j]/b[j]);
		}else if(op[j]=='*'){
			printf("%d\n",a[j]*b[j]);
		}
	}
	return 0;
}