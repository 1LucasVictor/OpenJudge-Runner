#include<stdio.h>

int main(void){
int A;
int B;
int m[3];

scanf("%d %d", &A, &B);
m[0] = A+B;
m[1] = A-B;
m[2] = A*B;

int max;
max = m[0];
int i ;

for(i = 1; i < 3;i++){
if(max < m[i])
max = m[i];
}

printf("%d", max);

return 0;
}
