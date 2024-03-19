#include <stdio.h>
#include <math.h>
int main(){
    double n,d,x,y,raiz,var;
    int contador=0;

    scanf("%lf %lf",&n,&d);

    for(int i =0;i<n;i++){
        scanf("%lf %lf",&x,&y);
        var= x*x + y*y;

        raiz= sqrt(var);

        if((raiz>d) ||(raiz==d)){
            contador++;
        }
    }

    printf("%d\n",contador);







    return 0;
}
