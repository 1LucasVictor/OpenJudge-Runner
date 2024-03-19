#include <stdio.h>
#include <string.h>
#include <math.h>
#define rep(i,l,n) for(i=l;i<n;i++)

void print(char str[],int a,int b){
	int i;
	rep(i,a,b+1) printf("%c",str[i]);
	printf("\n");
}

void reverse(char str[],int a,int b){
	int i;
	char str2[1010];
	rep(i,0,b-a+1) str2[a+i]=str[b-i];
	rep(i,a,b+1) str[i]=str2[i];
}

void replace(char str[],int a,int b,char p[]){
	int i;
	rep(i,0,b-a+1) str[a+i]=p[i];
}

int main(void){
	char str[1010],od[10],p[1010];
	int q,i,a,b;
	
	scanf("%s",str);
	scanf("%d",&q);
	
	rep(i,0,q){
		scanf("%s",od);
		if(strcmp(od,"print")==0){
			scanf("%d %d",&a,&b);
			print(str,a,b);
		}else if(strcmp(od,"reverse")==0){
			scanf("%d %d",&a,&b);
			reverse(str,a,b);
		}else if(strcmp(od,"replace")==0){
			scanf("%d %d %s",&a,&b,p);
			replace(str,a,b,p);
		}
	}
	
	return 0;
}

