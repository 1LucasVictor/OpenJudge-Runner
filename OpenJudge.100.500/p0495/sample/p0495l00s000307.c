#include<stdio.h>
int main()
{
	char S[3];
	int i,c=0,d=0;
	scanf("%s",S);
	i=0;
for(i=0;i<3;i++)
{
	if(S[i]=='A')
	c++;
	else if (S[i]=='B')
	d++;
}
if(c==2||d==2)
printf("Yes");
else
printf("No");
}