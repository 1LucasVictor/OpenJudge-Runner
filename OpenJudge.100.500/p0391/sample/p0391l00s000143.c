#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[1001];
  int q;
  int i,j,k;
  char req[10];
  int tar;
  int a,b;
  char p[1001];
  char temp;
  
  scanf("%s",str);
  scanf("%d",&q);

  for(i=0; i<q; i++){
    memset(req,'\0',10);
    memset(p,'\0',1001);
    
    scanf("%s",req);
    
    if(strcmp(req,"print")==0){
      scanf("%d %d",&a,&b);
      for(j=a; j<=b; j++){
	printf("%c",str[j]);
      }
      puts("");
    }
    else if(strcmp(req,"reverse")==0){
      scanf("%d %d",&a,&b);
      for(j=a,k=b; j<=k; j++,k--){
	temp = str[j];
	str[j] = str[k];
	str[k] = temp;
      }
    }
    else if(strcmp(req,"replace")==0){
      scanf("%d %d %s",&a,&b,p);
      for(j=a,k=0; j<=b; j++,k++){
	str[j] = p[k];
      }
    }    
  }
  
  return(0);
}