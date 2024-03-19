#include <stdlib.h>
#include <stdio.h>
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
int main(void){
  int a=0;
  scanf("%d",&a);
  int b[a+1];
  int check = 0;
  for(int i=0; i<a; i++){
    scanf("%d",&b[i]);
  }
  qsort(b,a,sizeof(int),compare_int);
  for(int i=0; i<a; i++){
    if(b[i]==b[i+1]){
      check=1;
    }
  }
  if(check==1){
    printf("NO");
  }else{
    printf("YES");
  }
  }