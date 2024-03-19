#include<stdio.h>
int main(){
	char a[3];
	int i;
	int n=0,m=0;
	for(i=0;i<3;i++){
		scanf("%c",&a[i]);
		if(a[i]=='A')
			n=1;
		if(a[i]=='B')
			m=1;
	}
	if(n==1&&m==1)
		printf("Yes");
	else
		printf("No");
} 