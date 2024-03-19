#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    long int x, y;
    long int n, d;
    long int point = 0;
    long int z;
    long int i;
    
    scanf("%ld %ld", &n, &d);
    if((n<1) || (n>200000)){
        printf("incorrect number:N\n");
        return -1;
    }
    if((d<0) || (d>200000)){
        printf("incorrect number:D\n");
        return -1;
    }
    
    for(i=0; i<n; i++){
        scanf("%ld %ld", &x, &y);
        if((x<-200000) || (x>200000)){
            printf("incorrect number:X\n");
            return -1;
        }
        if((y<-200000) || (y>200000)){
            printf("incorrect number:Y\n");
            return -1;
        }
        //printf("%ld %ld ", x, y);
        z = x*x + y*y;
        //printf("%ld ", z);
        //printf(" %f\n", sqrt(z));
        if(sqrt(z) <= d){
            point++;
        }
    }
    
    printf("%ld\n", point);
    
    return 0;
}
