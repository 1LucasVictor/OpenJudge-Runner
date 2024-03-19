#include <stdio.h>
#include <string.h>
int main (){
int j,i,k=0,d=0;
char s[100002]={0};
  scanf ("%s",s);
  for (i=0;i<strlen(s);i++){
  if (s[i]-'0'==0 && s[i+1]-'1'==0){
    k++;
  for (j=i;j<strlen(s);j++){
    s[j]=s[j+2];
  }
     if (i==0){
     i--;
     }
    else{
      i=i-2;
    }
  }
  else if (s[i+1]-'0'==0 && s[i]-'1'==0){
    k++;
    for (j=i;j<strlen(s);j++){
      s[j]=s[j+2];
    }
    if (i==0){
     i--;
     }
    else{
      i=i-2;
    }
  }
  }
printf ("%d",k*2);
return 0;
}
