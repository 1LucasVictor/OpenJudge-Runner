#include<stdio.h>
#include<math.h>

int main(void){
    int n, d, x[200000], y[200000], t[200000];
    int i, p=0;

    scanf("%d%d", &n, &d);
    for(i=0; i<n; i++){
        scanf("%d%d", &x[i], &y[i]);
    }
    for(i=0; i<n; i++){
        t[i] = sqrt(x[i]*x[i] + y[i]*y[i]);
        if(t[i] >= d){
            p++;
        }
    }
    printf("%d\n", p);
    return 0;
}