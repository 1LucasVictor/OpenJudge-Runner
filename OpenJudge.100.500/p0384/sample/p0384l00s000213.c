#include <stdio.h>

int main(void){
  char a[1200]={0};
  char small[]="abcdefghijklmnopqrstuvwxyz";
  char big[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i,j;

  scanf("%[a-zA-Z -,-.]",a);

  for(i=0;a[i]!=0;i++){
    for(j=0;j<26;j++){
      if(a[i]==big[j]){
	a[i]=small[j];
      }else if(a[i]==small[j]){
	a[i]=big[j];
      }
    }
  }

  printf("%s\n",a);

  return 0;

}