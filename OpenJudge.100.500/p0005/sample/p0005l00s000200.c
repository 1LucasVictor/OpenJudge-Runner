#include <stdio.h>
#include <string.h>

char str[21]; // ¶ñ
char result[21]; // ½]µ½Êðüêé
int n; // ¶ñÌ·³ 
int i;
int main(void){
  scanf("%s",str); //¶ñðL[{[h©çÇÝÞ
  n=strlen(str); //¶ñÌ·³ðnÉüêé

  for(int i=0;i<n;i++){
    result[i]=str[n-i-1]; // ¶ñð½]·é
  }

  printf("%s\n",result); // ½]µ½Êð\¦

  return 0;
}