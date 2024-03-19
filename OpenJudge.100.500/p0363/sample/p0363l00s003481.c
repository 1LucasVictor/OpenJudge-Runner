#include<stdio.h>
 
int main(){
    int a, b ,c ,max,min,middle;
     
    scanf("%d %d %d", &a, &b, &c);
    
    max = a; 

    if (b >= max) {
      middle = a;
      max = b;
    } else {
        middle = b;
    }

    if (c >= max) {
       min = middle;
       middle = max;
       max = c;
    } else if (c >= middle) {
         min = middle;
         middle = c;
    } else {
         min = c;
    }

    printf("%d %d %d\n", min, middle, max);
     
    return 0;
}
	