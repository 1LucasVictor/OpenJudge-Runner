#include <stdio.h>

void swap(int *, int *);

int main(){
  int i,j,count=0,n;
  int *arr;

  scanf("%d",&n);
  arr = (int *)malloc(sizeof(int) * n);
  for(i=0; i<n; i++) scanf("%d",&arr[i]);

  for(i=0; i<n; i++){
    for(j=n-1; j>i; j--){
      if(arr[j] < arr[j-1]){
	swap(&arr[j],&arr[j-1]);
	count++;
      }
    }
  }

  for(i=0; i<n; i++) printf("%-2d",arr[i]);
  printf("\n%d\n",count);

  free(arr);

  return 0;
}

void swap(int *p1, int *p2){
  int tmp;

  tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;

}