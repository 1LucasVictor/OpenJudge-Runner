#include <stdio.h>

int main(void)
{
	int A,B;
	int s[4],temp;
	scanf("%d %d",&A,&B);
	s[0]=A+B;
	s[1]=A-B;
	s[2]=A*B;
	if(s[0]>s[1]){
		s[1]=s[0];
	}
	if(s[1]>s[2]){
		s[2]=s[1];
	}
	printf("%d\n",s[2]);
	return 0;
}