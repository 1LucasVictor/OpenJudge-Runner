#include <stdio.h>
int main(int argc, char const *argv[]) {
  long L, R, m;
  long min = 2000000000;

  scanf("%lu %lu",&L, &R );

  for (int i = L; i < R; i++) {
    for (int j = i+1; j< R+1; j++) {
      m = (i*j)%2019;
      if(m<min){
        min = m;
      }
    }
  }

  printf("%lu\n",min );

  return 0;
}
