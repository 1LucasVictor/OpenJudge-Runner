#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int d;
    scanf("%d", &d);
    long x[n];
    long y[n];
    int count = 0;
    double length = 0;
    
    for(int i=0;i<n;i++){
        scanf("%ld", &x[i]);
        scanf("%ld", &y[i]);
        if(sqrt(pow(x[i], 2) + pow(y[i], 2)) <= d){
            count++;
        }
    }

    printf("%d\n", count);
    
    return 0;

}