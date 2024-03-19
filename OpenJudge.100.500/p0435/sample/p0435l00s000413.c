#include <stdio.h>
#include <math.h>
int main(){
    double n,d,raiz;
    int contador=0;
    long long int x,y,var;

    scanf("%lf %lf",&n,&d);

    for(int i =0;i<n;i++){
        scanf("%lld %lld",&x,&y);
        var= x*x + y*y;

        raiz= sqrt(var);

        if(raiz<=d){
            contador++;
        }
    }

    printf("%d\n",contador);







    return 0;
}
