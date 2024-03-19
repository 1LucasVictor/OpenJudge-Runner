#include<stdio.h>
#include<string.h>
 
int main(){
 
unsigned char N[1000];
 
while(scanf("%s",N)==0);
  int  l=strlen(N)-1;
if(N[l]=='3'){
  printf("bon");
}else if((N[l]=='0')||(N[l]=='6')||(N[l]=='1')||(N[l]=='8')){
  printf("pon");
}else{
  printf("hon");
}
  return 0;
}