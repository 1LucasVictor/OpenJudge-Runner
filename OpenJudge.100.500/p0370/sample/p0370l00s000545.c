#include<stdio.h>
int main(void){

int a[20000],b[20000],i=0;
char op[20000];
	
	for(i=0;i<20000;i++){
		scanf("%d %c %d",&a[i],&op[i],&b[i]);
		if(op[i]=='?'){
			break;
		}
		if(op[i]=='+'){
			printf("%d\n",a[i]+b[i]);
		}
		else if(op[i]=='-'){
			printf("%d\n",a[i]-b[i]);
		}
		else if(op[i]=='*'){
			printf("%d\n",a[i]*b[i]);
		}
		else if(op[i]=='/'){
			printf("%d\n",a[i]/b[i]);
		}
	}
return 0;
}

