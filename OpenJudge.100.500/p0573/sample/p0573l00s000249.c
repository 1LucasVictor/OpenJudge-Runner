#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  char a[5];
  scanf("%s",a);
  qsort(a,4,sizeof(a[0]),strcmp);
  puts(a[0]==a[1]&&a[2]==a[3]&&a[0]!=a[2]?"Yes":"No");
  return 0;
}