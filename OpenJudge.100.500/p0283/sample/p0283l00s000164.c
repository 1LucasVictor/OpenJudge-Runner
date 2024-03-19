#include<stdio.h>

#define N 8

int q[N][N],x[N],y[N],jmemo[N],row[N],col[N],dpos[2*N-1],dneg[2*N-1],cnt=0,ok=0;

int judge(int n){
    int k;
    
    for(k=0;k<n;k++){
     
        if(q[x[k]][y[k]]==0){
            return 0;// 2回目はできてない
        }
    }
    
    return 1;
}

void queen(int i,int j,int n){
    int m,l,v,k,a;
    
    if(ok==1)return;
    
    if(row[i]==1&&col[j]==1&&dpos[i+j]==1&&dneg[i-j+N-1]==1&&i<N&&j<N){
        q[i][j]=1;
        row[i]=0;
        col[j]=0;
        dpos[i+j]=0;
        dneg[i-j+N-1]=0;
        jmemo[i]=j+1;
    
         queen(i+1,0,n);
    }
    
    if(j==N){
        q[i-1][jmemo[i-1]-1]=0;
        dpos[i-1+jmemo[i-1]-1]=1;
        row[i-1]=1;
        col[jmemo[i-1]-1]=1;
        dneg[i-1-jmemo[i-1]+1+N-1]=1;
        jmemo[i]=0;
       
        queen(i-1,jmemo[i-1],n);
    }
    
    if(i==N){
      

        a=judge(n);
        if(a!=1){
            q[i-1][jmemo[i-1]-1]=0;
            dpos[i-1+jmemo[i-1]-1]=1;
            row[i-1]=1;
            col[jmemo[i-1]-1]=1;
            dneg[i-1-jmemo[i-1]+1+N-1]=1;
            jmemo[i]=0;
           
            queen(i-1,jmemo[i-1],n);//queen1(jmemo[0])これだと同じ列のときできない サイキが5回してる ここにきた奴らはできてる　来てないやつがいる
        }

        else if(a==1){
            ok=1;
            
            return;
        }
        // 2回目はできてない
    }
     
 queen(i,j+1,n);
}

void queen1(int n){
    int i,j,k,u;//not free=0,free=1

   for(i=0;i<N;i++){
       row[i]=1;
       col[i]=1;
       for(j=0;j<N;j++){
           dpos[i+j]=1;
           dneg[i-j+N-1]=1;
           q[i][j]=0;
       }
   }
   
     queen(0,0,n);
}

int main(){
    int i,j,k,n;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x[i],&y[i]);
    }
    queen1(n);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(q[i][j]==1)printf("Q");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}

