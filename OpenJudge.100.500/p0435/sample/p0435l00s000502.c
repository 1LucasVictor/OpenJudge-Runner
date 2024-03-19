#include<stdio.h>
#include<math.h>
int main(){
    int n, d;
    int cont=0;
    scanf("%d %d", &n, &d);
    for (int i=0; i<n; ++i){
        int x,y;
        scanf("%d %d", &x, &y);
        double op=((x*x)+(y*y));
        op=sqrt(op);
        if (op<=d){
            cont+=1;
        }
    }
    printf("%d\n", cont);
    return 0;
}
