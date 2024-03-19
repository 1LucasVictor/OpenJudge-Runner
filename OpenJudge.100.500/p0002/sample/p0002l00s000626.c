#include<stdio.h>
    int main(void){
    int a,i,j,n,m,tri[3]={0};
    scanf("%d",&a);
    for(n=0;n<a;n++){
        scanf("%d %d %d",&tri[0],&tri[1],&tri[2]);
    for(i=0;i<2;i++){
        for(j=i+1;j<3;j++){
            if(tri[i]<tri[j]){
            m=tri[i];
            tri[i]=tri[j];
            tri[j]=m;
            }
        }
    }
    if(tri[0]*tri[0]==tri[1]*tri[1]+tri[2]*tri[2]){
        printf("YES\n");
    }else{
            printf("NO\n");
            }
    }
    return 0;
}