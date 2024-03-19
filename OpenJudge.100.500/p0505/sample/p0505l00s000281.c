#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>


int main (void) {
int H,N;
scanf("%d %d",&H,&N);
int A[N];
int sum=0;
for (int i=0;i<N;i++){
    scanf("%d",&A[i]);
    sum+=A[i];
}
if (sum>=H) {printf("Yes");}
  else {printf("No");}


return EXIT_SUCCESS;
}
