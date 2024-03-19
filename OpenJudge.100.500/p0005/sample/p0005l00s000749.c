#include<stdio.h>

int main(){
	char s1[21], s2[21];
	int i, j;
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++){}
	i--;
	j=0;
	for(;i>=0;i--){
		s2[j++]=s1[i];
	}
	s2[j]='\0';
	printf("%s\n",s2);
	return 0;
}