#include <stdio.h>

int dec(int *v,int num1) {
  int k=0,j,i;
  for (i = 2; i <= num1;) {
    if (num1%i==0) {
      v[k]=i;
      num1/=i;
      k++;
    }else{
      i++;
    }
  }
  return k;
}

int main(int argc, char const *argv[]) {
  int a, b,j;
  scanf("%d",&a);
  int vec[a];
  int i = dec(vec,a);
  for (j = 0; j < i; j++) {

    if (vec[j]>9) {
      printf("No\n");
      break;
    }if (j==i-1) {
      printf("Yes\n");
    }

  }
  return 0;
}
