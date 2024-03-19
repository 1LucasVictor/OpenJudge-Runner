#include <stdio.h>

int main(int argc, const char * argv[]) {

    int x[10000],y,z=0,z1=0,z2;
    scanf("%d",&y);
    for(int n=1;n<=y;n++){
        scanf("%d\n",&x[n]);
        if(n==1){
            z1=x[1];
            z=x[1];
        }
        if(n>1){
            if(z<x[n]){
                z=x[n];
            }
        }
        if(n>1){
            if(z1>x[n]){
                z1=x[n];
            }
        }

        z2+=x[n];
    }
    printf("%d %d %d\n",z1,z,z2);
    return 0;
}

