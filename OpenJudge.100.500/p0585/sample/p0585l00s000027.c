#include<stdio.h>
#include<string.h>/*
int max(int a,int b){
  if(a > b)return a;
  return b;
}
int min(int a,int b){
  if(a < b)return a;
  return b;
}
int zet(int a){
  if(a > 0)return a;
  return -a;
}
void swap(int *x,int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}
int partition(int array[],int left,int right) {
  int i,j,pivot;
  i = left;
  j = right + 1;
  pivot = left;
  do{
    do{ i++; } while(array[i] < array[pivot]);
    do{ j--; } while(array[pivot] < array[j]);
    if(i < j)swap(&array[i],&array[j]);
  }while (i < j);
  swap(&array[pivot],&array[j]);
  return j;
}
void quick_sort(int array[],int left,int right) {
  int pivot;
  if(left < right) {
    pivot = partition(array,left,right);
    quick_sort(array,left,pivot-1);
    quick_sort(array,pivot+1,right);
  }
}
*/
int main(void){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  c /= a;
  printf("%d\n",c * b);
  return 0;
}