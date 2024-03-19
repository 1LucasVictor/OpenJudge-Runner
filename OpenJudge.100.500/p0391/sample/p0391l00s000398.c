#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 1000

void replace(char s[],int a,int b,char t[]){
	int n=(b-a);

	for(int i=0;i<=n;i++){
		s[a+i]=t[i];
	}
}

void reverse(char s[],int a,int b){
	char t[N];
	int n=(b-a+1);
	for(int i=0;i<n;i++){
		t[i]=s[a+i];
	}
	for(int i=0;i<n;i++){
		s[a+i]=t[n-1-i];
	}
}

void print(char s[],int a,int b){
	int n=(b-a+1);
	for(int i=0;i<n;i++){
		printf("%c",s[a+i]);
	}
	printf("\n");
}

int main(void){
	char s[N],t[N];
	int n,a,b;

	scanf("%s",s);
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",t);
		if(strcmp(t,"replace")==0){
			scanf("%d %d %s",&a,&b,t);
			replace(s,a,b,t);
		}else if(strcmp(t,"reverse")==0){
			scanf("%d %d",&a,&b);
			reverse(s,a,b);
		}else if(strcmp(t,"print")==0){
			scanf("%d %d",&a,&b);
			print(s,a,b);
		}
	}
}
