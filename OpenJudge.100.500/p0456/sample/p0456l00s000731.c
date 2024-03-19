#include<stdio.h>
#include<string.h>
int main(void){
  int i,o;
  int n=0;
  char a[1000];
  char b[1000];
  scanf("%s",a);
  scanf("%s",b);
  i=strlen(a);
  for(o=0;o<=i;o++){
    if(a[o]!=b[o]){
      n++;
    }
  }
  printf("%d\n",n);
  return 0;
}
      