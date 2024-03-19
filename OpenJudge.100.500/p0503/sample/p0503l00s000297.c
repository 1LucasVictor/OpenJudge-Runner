#include <stdio.h>
#include <stdlib.h>
int asc(const void *a, const void *b) {
  long *A = (long *)a;
  long *B = (long *)b;
  if (*A > *B) return 1;
  if (*A < *B) return -1;
  return 0;
}
int main(int argc, char* argv[]){
  int a=0,b=0,ans=0;
  char  t[10],s[10],c[10];
  scanf("%d",&a);
  long int k[a];
  for (int i = 0; i < a; i++) {
    scanf("%ld",&k[i]);
  }
  long int kn[a];
  qsort(k, sizeof(k) / sizeof(int), sizeof(int), asc);
  for (int i = 1; i < a; i++) {
    if (k[i]==k[i-1]) {
      ans=1;
    }
  }
  if (ans==1) {
    printf("NO");
  }else{
    printf("YES");
  }
}
