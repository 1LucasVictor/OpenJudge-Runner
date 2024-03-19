#include <stdio.h>
int main (){
  char s[5];
  int k=0;
scanf ("%s",s);
if (s[0]==s[1] && s[2]==s[3]){
k++;
}
  else if (s[0]==s[2] && s[1]==s[3]){
  k++;
  }
  else if (s[0]==s[3] && s[1]==s[2]){
  k++;
  }
  if (k>0){
  printf ("Yes");
  }
 else {
 printf ("No");
 }
return 0;
}