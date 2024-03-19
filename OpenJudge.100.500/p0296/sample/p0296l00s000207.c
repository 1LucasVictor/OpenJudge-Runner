#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int num[100];

int count;
void push(int n){
	num[count++]=n;
}

int pop(){
	return num[--count];
}

void calc(char c){
	int a,b;
	a=pop();
	b=pop();
	if(c=='+'){
		push(b+a);
	}else if(c=='-'){
		push(b-a);
	}else{
		push(b*a);
	
	}

}
int main(){
	char c[200];
	int i=0,a,b,flag=0;
	fgets(c,200,stdin);
	count=0;
	int len=strlen(c);

	char x[20];	
	int j=0,m;

	for(i=0;i<len;i++){
		if(c[i]=='+' || c[i]=='-' || c[i]=='*'){
			calc(c[i]);
			flag=1;
		}else if(c[i]<='9' && '0'<=c[i]){
			flag=0;
			x[j]=c[i];
			j++;
		}else if(c[i]==' ' && flag==0){
			push(atoi(x));
			memset(x,' ', 20);
			j=0;
		}
	}	
	
		printf("%d\n", num[0]);
	
	return 0;
}