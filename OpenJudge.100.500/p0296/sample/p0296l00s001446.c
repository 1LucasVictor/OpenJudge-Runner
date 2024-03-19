#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define buf 101

int a,b,top,S[buf];

void push(int x);
int pop(void);
int main(void){
	int a,b,i,j,y=0,z,top=0;
	char s[buf],n[buf],m[buf];

	fgets(s,sizeof(s),stdin);
	sscanf(s,"%s",m);
	for(i=1; ;i+=2){
   		sscanf(&s[i],"%s",&n[i]);
		if(sscanf(&s[i],"%s",&n[i])!=1)
			break;
	}
	sscanf(m,"%d",&y);
	push(y);
	for(j=1;j<i;j+=2){
		if(n[j]=='+'){
			b=pop();
			a=pop();
			push(a+b);
		}
		else if(n[j]=='-'){
			b=pop();
			a=pop();
			push(a-b);
		}		
		else if(n[j]=='*'){
			b=pop();
			a=pop();
			push(a*b);
		}
		else{
			sscanf(&n[j],"%d",&z);
			push(z);
		}
	}
	printf("%d\n",S[1]);
	return 0;
}
void push(int x){
	S[++top]=x;
}
int pop(void){
	return S[top--];
}