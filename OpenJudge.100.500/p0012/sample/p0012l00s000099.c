#include <stdio.h>

int main(){
  int a[100],i=0;
  while(scanf("%d",&a[i])!=EOF){
    if(a[i])i++;
    else{
      i--;
      if(i>=0)printf("%d\n",a[i]);
    }
  }

  return 0;
}