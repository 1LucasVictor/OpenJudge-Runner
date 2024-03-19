#include<stdio.h>
int main(){
    int tramp[4][13],n,i,r,l,num;
    char c;
    scanf("%d",&n);
    for(r=0;r<4;r++){
        for(l=0;l<13;l++){
            tramp[r][l]=0;
        }
    }
    for(i=0;i<n*2;i++){                       
        scanf("%c",&c);
        if(c=='S'){
            scanf("%d",&num);
            tramp[0][num-1]=1;
        }else if(c=='H'){
            scanf("%d",&num);
            tramp[1][num-1]=1;
        }else if(c=='C'){
            scanf("%d",&num);
            tramp[2][num-1]=1;
        }else if(c=='D'){
            scanf("%d",&num);
            tramp[3][num-1]=1;
        }
    }
    for(r=0;r<4;r++){
        for(l=0;l<13;l++){
            if(tramp[r][l]==0){
                if(r==0){
                    printf("S %d\n",l+1);
                }else if(r==1){
                    printf("H %d\n",l+1);
                }else if(r==2){
                    printf("C %d\n",l+1);
                }else if(r==3){
                    printf("D %d\n",l+1);
                }
            }
        }
    }
}