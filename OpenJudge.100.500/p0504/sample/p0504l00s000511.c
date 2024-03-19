#include<stdio.h>
#include<math.h>
int main()
{
int H, A, Attack, a, b;
scanf("%d%d", &H, &A);
if(A!=0)
Attack=ceil(H/(float)A);
printf("%d", Attack);
}