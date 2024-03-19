
#include<stdio.h>
#include <string.h>

int main(){
  int i,j,m,h,l;
  char s[201]={},temp[201]={};

  while(1){
    memset(s,'\0',201);
    scanf("%s\n",s);
    if(s[0]=='-'){
      break;
    }
    l = strlen(s);
    scanf("%d\n", &m);
    memset(temp,'\0',201);
    for(i=0;i<m;i++){
      scanf("%d",&h);
      for(j=0;j<h;j++){
        temp[j] = s[j];
      }
      for(j=h;j<l;j++){
        s[j-h] = s[j];
      }
      for(j=0;j<h;j++){
        s[l-h+j] = temp[j];
      }
    }
    printf("%s\n",s);
  }


  return 0;
}
