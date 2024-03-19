#include<stdio.h>

int main(){
	char str[5];
  char a,b,c,d;
  scanf("%s",str);
	a=str[0],b=str[1],c=str[2],d=str[3];
	if((a==b && c==d && a!=c)|| (a==c && b==d && a!=b)||(a==d && b==c && a!=b))printf("Yes\n");
  else printf("No\n");
  return 0;
}