#include <stdio.h>

int main(int argc, char const *argv[]) {
  /* code */
  int h, n; //H,N
  int i; //for用
  int sum=0;
  scanf("%d %d\n", &h, &n);
  int a[n];
  for(i=0; i<n; i++){
    scanf("%d", &a[n]);
    sum += a[n];
    if(sum>=h)
      break;
  }

  if (sum>=h) {
    printf("Yes");
  }else{
    printf("No");
  }


  return 0;
}
