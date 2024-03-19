#include <stdio.h>
int main() {
int n,min,max;
int i;
int A[200000];
scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&A[i]);

min = A[0];
max = A[1] - A[0];
for(i=1;i<n;i++) {
	if(min > A[i]) min = A[i];
	if(max < A[i]-min) max = A[i]-min;
}
printf("%d\n",max);
return 0;
}