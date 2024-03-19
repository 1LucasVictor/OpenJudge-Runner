#include <stdio.h>
#include <string.h>
int main (){
int j,i,k=0,d=0;
char s[100002]={0};
  scanf ("%s",s);
  for (i=0;s[i]!=0;i++){
  if (s[i]=='0'){
    k++;
  }
  else {
  d++;
  }  
  }
  if (k<d){
  printf ("%d",k*2);
  }
else {
printf ("%d",d*2);
}
return 0;
}
