#include<stdio.h>

int main(void){
    int n, d;
    scanf("%d\n", &n);
    scanf("%d\n", &d);
    int x[n], y[n], z[n];
    int s = 0;

    for(int i = 0; i < n; i++){
        scanf("%d\n", &x[i]);
        scanf("%d\n", &y[i]);
        z[i] = x[i]*x[i] + y[i]*y[i];
        if(d*d >= z[i]){
            s++;
        }
    }

    printf("%d\n", s);
}
