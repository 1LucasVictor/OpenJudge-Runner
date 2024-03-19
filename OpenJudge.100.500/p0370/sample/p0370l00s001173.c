#include<stdio.h>
int main(){
	char op;
	int a[1000],b[1000],i,j,r[1000];
//	long r[1000];
	
	for(i=0;i<1000;i++){
//		printf("%c\n",op);
		scanf("%d %c %d",&a[i],&op,&b[i]);
//		printf("%c\n",op);
		if(op=='?') break;
		else if(op=='+') r[i] = a[i] + b[i];
		else if(op=='-') r[i] = a[i] - b[i];
		else if(op=='*') r[i] = a[i] * b[i];
		else if(op=='/'){
			if(b!=0) r[i] = a[i] / b[i];
			else i = i - 1;
		}
		
		else i = i - 1;
		
//		printf("%d\n",r[i]);
		
//		printf("%c\n",op);
	}
	
	for(j=0;j<i;j++){
		printf("%d\n",r[j]);
	}

	return 0;
}