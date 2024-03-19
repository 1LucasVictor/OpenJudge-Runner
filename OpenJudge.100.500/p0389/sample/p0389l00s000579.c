#include<stdio.h>
#include<string.h>
 
int main(){
  char str[201],tmp[201];
  int i,j,n,h,len;
 
  while(1){
    scanf("%s",str);
    if(str[0] == '-') break;
    len=strlen(str);
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d", &h);
      for(j=0;j<len;j++) tmp[j] = str[j];
      for(j=0;j<len-h;j++){
    str[j] = str[j+h];
      }
      for(j=0;j<h;j++){
    str[j+len-h] = tmp[j];
      }
    }
    printf("%s\n",str);
  }
  return 0;
}
