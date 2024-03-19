#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int part(int a[],int left,int right){
  int x;
  int i,j;
  int t;
 
  x = a[right];
 
  i = left;
  j = right - 1;
  while(i < j){
    while(a[i] < x) i++;
    while(i < j && a[j] > x) j--;
 
    t = a[i]; a[i] = a[j]; a[j] = t;
  }
 
  t = a[i]; a[i] = a[right]; a[right] = t;
 
  return i;
}
 
void quicksort(int a[],int left,int right){
  int v;
 
  if(left >= right) return;
 
  v = part(a,left,right);
 
  part(a,left,right);
  quicksort(a,left,v - 1);
  quicksort(a,v + 1,right);
}
 
int main(){
  int n,i;
  int a[200000];
  int flag = 0;
 
  scanf("%d", &n);
 
  for(i = 0;i < n;i++) scanf("%d", &a[i]);
 
  quicksort(a,0,n - 1);
 
  for(i = 0;i < n - 1;i++){
    if(a[i] == a[i + 1]){
      printf("NO\n");
      flag = 1;
      break;
    }
  }
 
  if(flag == 0) printf("YES\n");
 
  return 0;
}