#include <stdio.h>
#define swap(type, x, y)  do{ type t = x; x = y; y = t; }while(0)

void quick(int array[], int left, int right){
  int pl = left, pr = right;
  int x = array[(left + right) / 2];
  do{
    while(array[pl] < x)  pl++;
    while(array[pr] > x)  pr--;
    if(pl <= pr){
      swap(int, array[pl], array[pr]);
      pl++, pr--;
    }
  }while(pl <= pr);
  if(pl < right)  quick(array, pl, right);
  if(pr > left)  quick(array, left, pr);
}

int main(){
  int n;  scanf("%d", &n);
  int a[200005];
  for(int i=0; i<n; i++)
    scanf("%d", a+i);

  quick(a, 0, n-1);

  int ans = 1;
  for(int i=0; i<n-1; i++)
    if(a[i] == a[i+1])
      ans = 0;

  if(ans)  printf("YES\n");
  else  printf("NO\n");

  return 0;
}
