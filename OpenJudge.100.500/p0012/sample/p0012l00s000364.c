#include <stdio.h>

int main(){
  int a[100],i=0;
  while(1){
    scanf("%d",&a[i]);
    if(a[i])i++;
    else{
      i--;
      if(i>=0)printf("%d\n",a[i]);
      if(i==0)break;
    }
  }

  return 0;
}