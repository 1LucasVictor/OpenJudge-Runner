#include<stdio.h>
#define INFTY (1 << 21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int h,ray[100][100];

int Pri();

int main(){
    int i,j,a;
    int P;
    
    scanf("%d",&h);
    
    for(i = 0;i < h;i++){
        for(j = 0;j < h;j++){
            scanf("%d",&a);
            
            ray[i][j] = a;
            
            if(ray[i][j] == -1) ray[i][j] = INFTY;
        }
    }
    
    P = Pri();
    
    printf("%d\n",P);
    
    return 0;
}

int Pri(){
    int i,u,min;
    int d[100],p[100],color[100],sum = 0;
    
    for(i = 0;i < h;i++){
        d[i] = INFTY;
        p[i] = -1;
        color[i] = WHITE;
    }
    
    d[0] = 0;
    
    while(1){
        min = INFTY;
        
        u = -1;
        
        for(i = 0;i < h;i++){
            if(min > d[i] && color[i] != BLACK){
                u = i;
                min = d[i];
            }
        }
        
        if(u == -1) break;
        
        color[u] = BLACK;
        
        for(i = 0;i < h;i++){
            if(color[i] != BLACK && ray[u][i] != INFTY){
                if(d[i] > ray[u][i]){
                    d[i] = ray[u][i];
                    p[i] = u;
                    color[i] = GRAY;
                }
            }
        }
    }
    
    for(i = 0;i < h;i++){
        if(p[i] != -1) sum += ray[i][p[i]];
    }
    
    return sum;
}
