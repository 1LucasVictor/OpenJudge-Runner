#include <stdio.h>
#include <string.h>

int main(){
  int m,i,j,len,h;
  char a[201],tem[201];

  while(1){
    scanf("%s",a);
    len=strlen(a);
    if(!strcmp(a,"-")) break;

    scanf("%d",&m);
    for(i=0;i<m;i++){
      scanf("%d",&h);
      for(j=0;j<len;j++){
	tem[j]=a[j];
	a[j]=a[j+h];
      }
      tem[h]='\0';
      for(j=len-1;j>=len-h;j--) a[len-h+(len-j)-1]=tem[len-j-1];
    }
    printf("%s\n",a);
  }

  return 0;
}