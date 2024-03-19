#include <stdio.h>

int main(void){
    int i,j,n;float m[8],e;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<8;j++){scanf("%f",&m[j]);}
        e=(m[3]-m[1])*(m[6]-m[4])-(m[7]-m[5])*(m[2]-m[0]);
        printf("%s\n",(e==0)?"YES":"NO");
    }
    return 0;
}

