
#include<stdio.h>

#define MAX 100
static const int I=(1<<21);
static const int W=0;
static const int G=1;
static const int B=2;

int n,M[MAX][MAX];

void jk(){
    int minv,i;
    int d[MAX],color[MAX];
   
    
    for(i=0;i<n;i++){
        d[i]=I;
        color[i]=W;
    }
    
    d[0]=0;
    color[0]=G;
    


    while(1){
        minv=I;
        int u=-1;
        
        for(i=0;i<n;i++){
            if(minv>d[i]&&color[i]!=B){
                u=i;
                minv=d[i];
            }
        }


        if(u==-1) break;

        color[u]=B;
        int v;
        for(v=0;v<n;v++){
            if(color[v]!=B && M[u][v]!=I){
                if(d[v]>d[u]+M[u][v]){
                    d[v]=d[u]+M[u][v];
                    color[v]=G;
                }
            }
        }
    }
    

    for(i=0;i<n;i++){
        printf("%d %d\n",i,(d[i]==I?-1:d[i]));
    }
}



int main(){
    int i,v,j;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            M[i][j]=I;
        }
    }
    



    int k,c,u;
    
    for(i=0;i<n;i++){
        scanf("%d%d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d%d",&v,&c);
            M[u][v]=c;
        }
    }
    
    jk();
    
    return 0;
}

