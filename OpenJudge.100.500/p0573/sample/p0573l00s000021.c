#include<stdio.h>
int main()
{
	char S[4];
	char c1,c2;
	int a=0;
	int b=0;
	c1 = S[0];
	scanf("%s",S);
	for(int i=0;i<4;i++){
		if(c1==S[i]){a++;}else{c2=S[i];}
	}
	for(int i=0;i<4;i++){
		if(c2==S[i])b++;
	}
	if(a>=3){
		printf("NO\n");
	}
	else{
		if(b==2){printf("Yes\n");}
		else{printf("NO\n");}
	}
	return 0;
}