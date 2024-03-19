#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

int n;
int i;

scanf("%d", &n);

int array[n];

for ( i = 0; i < n ; i++){
        scanf("%d", &array[i]);
}

for ( i = 0; i < n - 1 ; i++){
        printf("%d ", array[n-1-i]);
}
        printf("%d\n", array[0]);
return 0;
}