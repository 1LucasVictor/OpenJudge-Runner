#include<stdio.h>
#include<math.h>
int main(){
    double n, d;
    int cont=0;
    scanf("%lf %lf", &n, &d);
    for (int i=0; i<n; ++i){
        double x,y;
        scanf("%lf %lf", &x, &y);
        double op=((x*x)+(y*y));
        op=sqrt(op);
        if (op<=d){
            cont+=1;
        }
    }
    printf("%d\n", cont);
    return 0;
}
