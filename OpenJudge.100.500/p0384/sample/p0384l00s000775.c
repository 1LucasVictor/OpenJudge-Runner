#include <stdio.h>

int main(void){
  char a[1200];
  char small[]="abcdefghijklmnopqrstuvwxyz";
  char big[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i,j;
  int cnt=0;

  scanf("%[a-zA-Z -,-.]",a);

  for(i=0;a[i]!='\0';i++){
    for(j=0;j<26;j++){
      if(a[i]==big[j]){
	a[cnt]=small[j];
      }else if(a[i]==small[j]){
	a[cnt]=big[j];
      }
    }
    cnt++;
  }

  printf("%s\n",a);

  return 0;

}