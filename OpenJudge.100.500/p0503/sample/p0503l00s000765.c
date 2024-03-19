#include<stdio.h>
int s1,b,N,a=200000;
int fun(){
int s[a],i,j;
for(i=0;i<N;i++){
	scanf("%d",&s[i]);
}
for(j=0;j<N;j++)
	for(i=0;i<N-j;i++)
	{	if(s[i]=s[i+1])
		b=0;
		else b=1;
		s1+=b;} 
	return s1;}
int main()
{
while(scanf("%d\n",&N)!=EOF)

if(fun()!=EOF)
		printf("YES") ;
else printf("NO");
		return 0;

}