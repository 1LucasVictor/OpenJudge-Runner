#include <stdio.h>
int main (){
char a[5];
  int k=0;
scanf ("%s",a);
  for (int i=0;i<4;i++){
  if (a[i]==a[i+1]){
  k++;
 break;   
  }
  }
 if (k>0){
printf ("Bad");
 }
  else{
  
  printf ("Good");
  }
return 0;
}