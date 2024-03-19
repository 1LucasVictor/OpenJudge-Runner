#include <stdio.h>
#include <stdlib.h>

int ordena(const void * a, const void * b){
  int x= (*(int*)a);
  int y= (*(int*)b);

  if (x<y)
    return 1;
  else
    return -1;
}

int main (){
  int h,n,soma=0;
  int forca[112345];

  scanf("%d%d", &h, &n);

  for(int i=0; i<n; i++)
    scanf("%d", &forca[i]);

  for(int i=0; i<n; i++)
    soma+=forca[i];

  if(soma<h){
    printf("No\n");
  }
  else
  {
    qsort(forca,n,sizeof(int), ordena);

    soma=0;
    for(int i=0; i<n; i++){
      soma+=forca[i];
      if(soma>=h){
        printf("Yes\n");
        break;
      }
    }
  }

  return 0;
}
