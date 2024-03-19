#include <stdio.h>

int main(void){
    int i,j,n;double m[8];
    scanf("%d",&n);
    int res[n];
    for(i=0;i<n;i++){
        for(j=0;j<8;j++){scanf("%lf",&m[j]);}
        m[0]-=m[2];m[1]-=m[3];m[4]-=m[6];m[5]-=m[7];
        if(m[0] != 0 && m[4] != 0 && m[0]/m[1]==m[4]/m[5]){res[i]=1;}
        else if(m[0]==m[4]){res[i]=1;}
        else{res[i]=0;}
    }
    for(i=0;i<n;i++){printf("%s\n",(res[i])? "YES":"NO");}
    return 0;
}

