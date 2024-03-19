#include<stdio.h>
int main(){
    int i,n,u,p,x,k[5][14]={0},s[52];
    char t;
    scanf("%d",&n);
    for(i=1;i<=n;i+=1){
        scanf(" %c%d",&t,&s[i]);
        x=s[i];
        if(t=='S'){
            k[1][x]=1;
        }
        else if(t=='H'){
            k[2][x]=1;
        }
        else if(t=='C'){
            k[3][x]=1;
        }
        else if(t=='D'){
            k[4][x]=1;
        }
    }
    for(u=1;u<=4;u+=1){
        for(p=1;p<=13;p+=1){
            if(u==1){
                if(k[1][p]!=1){
                    printf("S %d\n",p);
                }
            }
            else if(u==2){
                if(k[2][p]!=1){
                    printf("H %d\n",p);
                }
            }
            else if(u==3){
                if(k[3][p]!=1){
                    printf("C %d\n",p);
                }
            }
            else if(u==4){
                if(k[4][p]!=1){
                    printf("D %d\n",p);
                }
            }
        }
    }
    return 0;
}