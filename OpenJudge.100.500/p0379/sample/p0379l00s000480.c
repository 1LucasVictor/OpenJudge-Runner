#include <stdio.h>
#include <string.h>
int main(){
int max1,max2,sum1,sum2;
int i,j,i1,i2,i3;
int q1,q2,q3;
int a[100][100];
int b[1000];
scanf("%d %d\n", &max1, &max2);

for(i = 0;i < max1;i++){
	for(j = 0;j < max2;j++){
		scanf("%d ", &a[i][j]);
	}
}
for(i = 0;i < max2;i++){
	scanf("%d", &b[i]);
}
for(i = 0;i < max1;i++){
	for(j = 0;j < max2;j++){
		b[i] += a[i][j];
	}
	printf("%d\n",b[i]);
}
return 0;
}