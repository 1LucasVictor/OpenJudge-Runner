#include<stdio.h>
#include<stdlib.h>

void swap(int array[],int lo,int hi){
  int temp=array[lo];
  array[lo]=array[hi];
  array[hi]=temp;
}

void shuffle(int array[],int size){
  for(int i=0;i<size;i++){
    int j=rand()%size;
    swap(array,i,j);
  }
}

int partition(int array[],int low,int hig){
  int i=low;
  int j=hig+1;
  while(1){
    while(array[++i]<array[low]){
      if(i == hig) break;}
    while(array[low]<array[--j]){
      if(j==low) break;}
    if(i>=j) break;
    swap(array,i,j);
  }
  swap(array,low,j);
  return j;
}

void sort(int array[],int lo,int hi){
  if(hi<=lo) return;
  int j=partition(array,lo,hi);
  sort(array,lo,j-1);
  sort(array,j+1,hi);
}

void quicksort(int array[],int size){
  shuffle(array,size);
  sort(array,0,size-1);
}

int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);}

  quicksort(a,n);

  int f=0;
  for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1]){
      f=1;
      break;}}

  if(f==0) printf("YES\n");
  else printf("NO\n");

  return 0;
}
