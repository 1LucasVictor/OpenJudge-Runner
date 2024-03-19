#include<stdio.h>
#define Num 100
int main() {
    int n[Num],x[Num];
    int i,j,k,l;
    int Sum=0;
     
    for(l=0;l<Num;l++){
        scanf("%d %d",&n[l],&x[l]);
    }
    for(l=0;l<Num;l++){
        if(n[l]==0 && x[l]==0){
            break;
        }
        for(i=1;i<n[l]-1;i++)
            for(j=i+1;j<n[l];j++)
                for(k=j+1;k<n[l]+1;k++){
                    if (i+j+k==x[l]){
                        Sum++;
                    }
                }
        printf("%d\n",Sum);
        Sum=0;
    }
}
