#include <stdio.h>
#include <stdlib.h>

int compara(const void * a, const void * b){
  int x = *(int *) a;
  int y = *(int *) b;
  return x>y?1:x<y?-1:0;
}

void soma(int *v, int *r, int a){
  r[0] = 1;
  r[1] = 1;
  for (int i = 0; i < a; i++) {
    if (i>=(a)/2) {
      r[1]*=v[i];
    }else{
      r[0]*=v[i];
    }
  }
}

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
  qsort(v,k,sizeof(v[0]),compara);
  return k;
}

int main(int argc, char const *argv[]) {
  int a, b,j;
  scanf("%d",&a);
  int vec[a],r[2];
  int i = dec(vec,a);

  if (i>1) {
    soma(vec,r,i);
    if (r[0]>9 || r[1] >9) {
      printf("No\n");
    }else{
      printf("Yes\n");
    }
  }else{
    if (vec[0] >9 || a ==0) {
      printf("No\n");
    }else{
      printf("Yes\n");
    }
  }

  return 0;
}
