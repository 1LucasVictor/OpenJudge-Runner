#include<stdio.h>
#include<string.h>
int main(){
  int i,j,m,h,ss;
  char str[200],gomi[]="-";
  while(scanf("%s",str)){
    if(strcmp(str,gomi)==0)break;
    scanf("%d",&m);
    ss=strlen(str);
    for(i=0;i<m;i++){
      scanf("%d",&h);
      strncat(str,str,h);
      for(j=0;j<ss;j++){
	str[j]='\0';
	str[j]=str[j+h];
      }
      str[ss]='\0';
    }
    printf("%s\n",str);
  }
  return(0);
}