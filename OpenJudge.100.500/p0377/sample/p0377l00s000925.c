#include<stdio.h>
int main(){
    int a[13][4],i,j,b,c;
    char d;
    for(i=0;i<13;i++){
        for(j=0;j<4;j++){
            a[i][j]=0;
        }
    }
    scanf("%d",&b);
    while(b!=0){
        scanf("%s %d",&d,&c);
        if(d=='S'){
            a[c-1][0]=1;
        }
        else if(d=='H'){
                a[c-1][1]=1;
        }
        else if(d=='C'){
                a[c-1][2]=1;
        }
        else{
                a[c-1][3]=1;
        }
        b--;
    }
    for(j=0;j<4;j++){
        for(i=0;i<13;i++){
            if(a[i][j]==0){
                if(j==0){
                    printf("S %d\n",i+1);
                }
                else if(j==1){
                    printf("H %d\n",i+1);
                }
                else if(j==2){
                    printf("C %d\n",i+1);
                }
                else{
                    printf("D %d\n",i+1);
                }
            }
        }
    }
    return 0;
}