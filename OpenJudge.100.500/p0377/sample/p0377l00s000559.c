#include<stdio.h>

int main(void){
    int i,j,n,x,k[4][13]={0};
    char m;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%c",&m);
        scanf("%c %d",&m,&x);
        if(m=='S'){
            k[0][x-1]=1;
        }else if(m=='H'){
            k[1][x-1]=1;
        }else if(m=='C'){
            k[2][x-1]=1;
        }else{
            k[3][x-1]=1;
        }
    }
    
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(k[i][j]==0){
                if(i==0){
                    printf("S %d\n",j+1);
                }else if(i==1){
                    printf("H %d\n",j+1);
                }else if(i==2){
                    printf("C %d\n",j+1);
                }else{
                    printf("D %d\n",j+1);
                }
            }
        }
    }
    
    return 0;
}
