#include <stdio.h>

int main(){
 char str[20], str2[20];
 int i=0, j=0;
 scanf("%s", str);
 while( str[i] != '\0'){
   i++;
 }

 while( i >= 0){
   str2[j] = str[i-1];
   //printf("%c", str[i]);
   i--;
   j++;
 }
 str[j] = '\0';
 printf("%s\n", str2);

 return 0;
}