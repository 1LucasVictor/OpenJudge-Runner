#include<stdio.h>
#include<math.h>
int main(void){
    int N,i,j,box,count=0;
    double tri[3]={0};
    scanf("%d",&N);
    while(count<N){
        scanf("%lf %lf %lf",&tri[0],&tri[1],&tri[2]);
        for(i=0;i<2;i++){
            for(j=i+1;j<3;j++){
                if(tri[i]>tri[j]){
                    box=tri[i];
                    tri[i]=tri[j];
                    tri[j]=box;
                }
            }
        }
        tri[0]=pow(tri[0],2.0);
        tri[1]=pow(tri[1],2.0);
        tri[2]=pow(tri[2],2.0);
        
        if(tri[0]+tri[1]==tri[2]){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        count++;
    }
return 0;
}