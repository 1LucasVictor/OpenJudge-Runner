#include<stdio.h>
#include<string.h>

int abs(int n){
	if(n>0) return n;
	else return -n;
}

int main(void){
	int i,l,count;
	char S[100002];
	scanf("%s",S);
	
	l=strlen(S);
	count=0;
	for(i=0;i<l;i++){
		if(S[i]=='1') count++;
		else count--;
	}
	printf("%d",l-abs(count));
}