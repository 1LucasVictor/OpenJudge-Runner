#include <stdio.h>
#include <math.h>
int main(){
    int n,d,c=0;
    double x,y;
    scanf("%i%i",&n,&d);
    for(int i=0;i<n;i++){
        scanf("%lf%lf",&x,&y);
        if(d>=sqrt(x*x + y*y))
            c++;
    }
    printf("%i\n",c);
}