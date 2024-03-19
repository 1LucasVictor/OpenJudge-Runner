#include <stdio.h>
#include <math.h>
int main(){
    double n,d,raiz,var;
    int contador=0;
    long long int x,y;

    scanf("%lf %lf",&n,&d);

    for(int i =0;i<n;i++){
        scanf("%lld %lld",&x,&y);
        var= x*x + y*y;

        raiz= sqrt(var);

        if((raiz>d) ||(raiz==d)){
            contador++;
        }
    }

    printf("%d\n",contador);







    return 0;
}
