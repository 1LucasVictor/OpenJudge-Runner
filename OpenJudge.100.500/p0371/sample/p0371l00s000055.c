#include <stdio.h>


int main(){

int a[10000], min, max, n, i;

long sum;

scanf("%d", &n);

for(i = 0; i < n; i++){
scanf("%d", &a[i]);
sum += a[i];

}

max = min = a[0];
for(i = 1; i < n; i++){
    if(a[i] > max)
    max = a[i];
    
    if(a[i] < min)
    min = a[i];
}

printf("%d %d %2d\n", min, max, sum);


return 0;

}