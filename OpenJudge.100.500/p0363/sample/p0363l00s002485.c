#include<stdio.h>
void swap(int* max,int* min){
  int temp=*max;
  *max=*min;
  *min=temp;
}
void sort(int* x,int* y,int* z){
  if(*x>*y) swap(x,y);
  if(*y>*z) swap(y,z);
  if(*x>*y) swap(x,y);

}

int main(){
  int a,b,c;
  scanf("%d %d %d",&a ,&b, &c);
  sort(&a,&b,&c);

  printf("%d %d %d\n",a,b,c);

}

