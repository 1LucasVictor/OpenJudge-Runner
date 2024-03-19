#include <stdio.h>

int main(){

    int a,b,c,d,e,K;
    int dab,dac,dad,dae;
    int dbc,dbd,dbe;
    int dcd,dce;
    int dde;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&K);

    if(a< b && b<c && c<d && d<e){

        dab = b-a;
        dac = c-a;
        dad = d-a;
        dae = e-a;
        dbc = c-b;
        dbd = d-b;
        dbe = e-b;
        dcd = d-c;
        dce = e-c;
        dde = e-d;

        if(K>dab && K>dac && K>dad && K>dae && K>dbc && K>dbd && K>dbe && K>dcd && K>dce && K>dde){

            printf("Yay!");

        }else{

            printf(":(");

        }

    }

    return 0;
}