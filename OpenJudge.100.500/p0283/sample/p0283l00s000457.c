#include <stdio.h>
#define E 0
#define O 1
#define Q 2

int solve(int s[8][8],int);
int state(int board[8][8],int,int);
int Ans[8][8];

int main(){
    int n,i,j,count,s;
    int board[8][8];
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            board[i][j]=E;
        }
    }

    scanf("%d",&count);
    
    for(n=0;n<count;n++){
        scanf("%d%d",&i,&j);
        board[i][j]=Q;
        state(board,i,j);
    }
    for(i=0;i<8;i++)
        solve(board,0);
    /*
    while(count!=8){
        s=0;
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                if(board[i][j]==0){
                    s++;
                    board[i][j]=2;
                    count++;
                    if(state(board,i,j)==-1)break;
                }
            }
        }
        if(s==0){
            printf("Can't Solve this!\nWe can put %d Qs!\n",count);
            break;
        }
        
    }*/
    
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(Ans[i][j]==Q)printf("Q");
            else printf(".");
        }
        printf("\n");
    }
    
    return 0;
}

int state(int board[8][8],int ver,int sid){
    int i,j;
    
    //?¨???¨???
    for(i=0;i<8;i++){
        if(board[i][sid]!=Q) board[i][sid]=O;
        if(board[ver][i]!=Q) board[ver][i]=O;
    }
    
    //???????????????
    for(i=ver-1,j=sid+1;i>=0&&j<8;i--,j++){
        if(board[i][j]!=Q)board[i][j]=O;
        else return -1;
    }
    //???????????????
    for(i=ver+1,j=sid+1;i<8&&j<8;i++,j++){
        if(board[i][j]!=Q)board[i][j]=O;
        else return -1;
    }
    //???????????????
    for(i=ver-1,j=sid-1;i>=0&&j>=0;i--,j--){
        if(board[i][j]!=Q)board[i][j]=O;
        else return -1;
    }
    //???????????????
    for(i=ver+1,j=sid-1;i<8&&j>=0;i++,j--){
        if(board[i][j]!=Q)board[i][j]=O;
        else return -1;
    }
    return 0;
}

int solve(int s[8][8],int sid){
    int i,j,sum=0,res=0,ii,jj;
    int p[8][8];
    
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            p[i][j]=s[i][j];
            if(p[i][j]==Q){
                sum++;
            }
        }
    }
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(p[i][j]==Q)state(p,i,j);
        }
    }
    
    if(sum==8){
        //printf("\ncount = %d , sid = %d\n",sum,sid);
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                Ans[i][j]=p[i][j];
                //if(p[i][j]==Q)printf("Q");
                //else printf(".");
            }
            //printf("\n");
        }
        return 0;
    }
    if(sid>=8)return -1;
    
    for(i=0;i<8;i++){
        if(p[i][sid]==E){
            p[i][sid]=Q;
            res++;
            if(solve(p,sid+1)==0){
                return 0;
            }
            p[i][sid]=E;
        }
    }
    if(res==0){
        solve(p,sid+1);
    }
    
    return -1;
}