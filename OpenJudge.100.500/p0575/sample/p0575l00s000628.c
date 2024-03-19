#include<stdio.h>
#include<stdlib.h>

int cmp(const int *a,const int *b){

return *a > *b ? -1 : *a < *b ? 1 : 0 ;
}
//qsort(pa,n,sizeof(int),(int(*)(const void* ,const void*))cmp);

int main(void){

  int x,a;
  scanf("%d%d",&x,&a);
  if(a>x){
    printf("%d",0);
    return 0;
  }
  else{
    printf("%d",10);
  }


  return 0;
}
