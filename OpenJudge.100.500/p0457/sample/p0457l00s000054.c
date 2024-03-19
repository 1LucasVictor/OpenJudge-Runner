#include <stdio.h>
#include <stdlib.h>


int n,m,k;
int **table;

int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int min(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;        
    }
}

int main(){
    int i,j,tmp,l;
    scanf("%d %d %d", &n, &m, &k);
//    a = (int *)malloc(sizeof(int)*n);
//    b = (int *)malloc(sizeof(int)*m);
    table = (int**)malloc(sizeof(int*)*(n+1));
    for(i=0;i<n+1;i++){
        table[i] = (int*)malloc(sizeof(int)*(m+1));
    }
    table[0][0]=0;
    for(i=0;i<n;i++){
        scanf("%d",&tmp);
  //      a[i] = tmp;
        if(tmp+table[i][0]>k||table[i][0]<0){
            table[i+1][0] = -1;
        }else{
            table[i+1][0] = tmp+table[i][0];
        }
    }
    for(j=0;j<m;j++){
        scanf("%d",&tmp);
//        b[j]=tmp;
        if(tmp+table[0][j]>k||table[0][j]<0){
            table[0][j+1] = -1;
        }else{
            table[0][j+1] = tmp+table[0][j];
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            tmp=table[0][j]+table[i][0];
            if(tmp>k||table[0][j]<0||table[i][0]<0){
                table[i][j] = -1;
            }else{
                table[i][j] = tmp;
            }
        }
    }
    /*
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            printf("%d\t",table[i][j]);
        }
        printf("\n");
    }
    */
    for(l=n+m;l>=0;l--){
        for(i=max(l-m,0);i<=min(n,l);i++){
            if(table[i][l-i]>=0){
                printf("%d\n",l);
                exit(0);
            }
        }
    }
}
