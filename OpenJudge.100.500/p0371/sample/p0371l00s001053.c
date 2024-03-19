#include <stdio.h>
int main(){
int n;
int a;
scanf("%d %d",&n,&a);
int min = a;
long sum = a;
int max = a;

for (int i = 1;i<n;i++){
scanf("%d",&a);
if (a > max){
max = a;
}else if (a < min){
min = a;
}
sum = sum + a;
}
printf ("%d %d %ld\n",min,max,sum);

return 0;
}
