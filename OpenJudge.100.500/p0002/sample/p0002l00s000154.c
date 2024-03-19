#include<stdio.h>
 
int main(){
    int n,i,max=0,imax,a,N,data[3];
    scanf("%d",&N);
    for(n=0;n<N;n++){
        scanf("%d %d %d",&data[0],&data[1],&data[2]);
         for(i=0;i<3;i++){
            if(data[i]>max){
                max=data[i];
                imax=i;
            }
        }
        if(imax!=2){
            data[imax]=data[2];
            data[2]=max;
        }
        a=data[0]*data[0]+data[1]*data[1];
        if(data[2]*data[2]==a)printf("YES\n");
        else printf("NO\n");
        max=0;
    }
    return 0;
}