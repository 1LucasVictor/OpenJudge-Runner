#include<stdio.h>
int main(){
  int S,resH,resM,resS=0;
  scanf("%d",&S);
  resH=S/3600;
  resM=(S%3600)/60;
  resS=(S%3600)%60;
    printf("%d:%d:%d\n",resH,resM,resS);
    return 0;
}