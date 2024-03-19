#include<stdio.h>

static int INFTY = (1<<21);
static int MAX=100;
static int WHITE=0;
static int GRAY=1;
static int BLACK=2;

int M[100][100],n;

void dijikstra(){
    int min,i,v,u;
    int d[MAX],color[MAX];
    
    for(i=0;i<n;i++){
        d[i]=INFTY;
        color[i]=WHITE;
    }
    
    d[0]=0;
    color[0]=GRAY;
    while(1){
        min=INFTY;
        u=-1;
        for(i=0;i<n;i++){
            if(min>d[i] && color[i] != BLACK){
                u=i;
                min=d[i];
            }
        }
        if(u==-1) break;
        color[u]=BLACK;
        for(v=0;v<n;v++){
            if(color[v] != BLACK && M[u][v] != INFTY){
                if(d[v]>d[u]+M[u][v]){
                    d[v]=d[u]+M[u][v];
                    color[v]=GRAY;
                }
            }
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d %d",i,(d[i]==INFTY ? -1 : d[i]));
        printf("\n");
    }
}


int main(){
   
    int i,j,k,c,u,v;
    
    scanf("%d",&n);
    for(i=0;i<=n;i++){
       for(j=0;j<=n;j++){
            M[i][j] = INFTY;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d%d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d%d",&v,&c);
            M[u][v]=c;
        }
    }
    
    dijikstra();
    
    return 0;
}

