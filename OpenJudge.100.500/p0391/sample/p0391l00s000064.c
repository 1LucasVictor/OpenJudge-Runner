#include<stdio.h>
#include<string.h>
int main()
{
  int q,a,b,i,j,k,n=0,m,cent,basyo;
  char str[1001],mei[10],p[1001];
  scanf("%s",str);
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%s %d %d",mei,&a,&b);
    if(strcmp(mei,"replace")==0){
      scanf("%s",p);
      for(j=a;j<=b;j++){
	str[j]=p[n];
	++n;
      }
    }
    n=0;
    if(strcmp(mei,"reverse")==0){
      cent=(b-a)/2;
      for(basyo=0;basyo<=cent;basyo++){
	m=str[a+basyo];
	str[a+basyo]=str[b-basyo];
	str[b-basyo]=m;
      }
    }
    if(strcmp(mei,"print")==0){
      for(j=a;j<=b;j++){
	printf("%c",str[j]);
	if(j==b)printf("\n");
      }
    }
  }
  return 0;
}