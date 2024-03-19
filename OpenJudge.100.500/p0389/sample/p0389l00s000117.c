#include<stdio.h>
int main(){
  int m,h,i,j,sstr;
  char str[200];
  while(scanf("%s",str)!=EOF){
    if(strcmp(str,"-")==0)break;
    sstr=strlen(str);
    scanf("%d",&m);
    for(i=0;i<m;i++){
      scanf("%d",&h);
      strncat(str,str,h);
      for(j=0;j<sstr;j++){
	str[j]=str[j+h];
      }
      str[sstr]='\0';
    }
    printf("%s\n",str);
  }
  return(0);
}