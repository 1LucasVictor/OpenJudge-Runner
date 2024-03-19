  


#include<stdio.h>

 

int main(void) {

int n;

int x;

int num;

int min = 1000001;

int max = -1000001;

long total = 0;

 

scanf("%d", &n);

for (x = 0; x < n; x++) {

scanf("%d", &num);

if (min > num) min = num;

if (max < num) max = num;

total += num;

}

printf("%d %d %ld\n", min, max, total);

 

return (0);

} 