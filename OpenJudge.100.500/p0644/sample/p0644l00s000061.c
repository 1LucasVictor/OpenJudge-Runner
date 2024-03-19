#include <stdio.h>
int main(){
char a[3];
int b=0;
  scanf ("%s",a);
  for (int i=0;i<3;i++){
  if(a[i]=='1'){
  b++;
  }
  }
  printf ("%d",b);
return 0;
}
