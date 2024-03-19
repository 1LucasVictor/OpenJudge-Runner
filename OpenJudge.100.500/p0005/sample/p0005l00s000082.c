#include <stdio.h>
 #include <string.h>

 int main()
 {
 char d[20];
scanf("%s",&d);
 int len=strlen(d);
 int i;

 for(i=0;i<len/2;i++)
 {
 d[i]^=d[len-i-1];
 d[len-i-1]^=d[i];
 d[i]^=d[len-i-1];
 }
 printf("%s\n",d);
 }