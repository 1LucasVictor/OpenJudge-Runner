#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (void) {
    int n;
scanf("%d",&n);
int array[n];
for (int i=0;i<n;i++){
    scanf("%d",&array[i]);
}
for (int i = 0; i < n; i++) {
    if (array[i] % 2 == 0 && array[i] % 3 !=0 && array[i] % 5 != 0) {
      puts("DENIED");
      return 0;
    }
  }
  puts("APPROVED");
return EXIT_SUCCESS;
}
