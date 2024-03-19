#include<stdio.h>
int main()
{
    int n,m,a[6][2],b[3]={-1},i,f[3]={0};
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    for(i=0;i<m;i++){
        if(b[a[i][0]-1]!=a[i][1]) f[i]++;
        b[a[i][0]-1]=a[i][1];
    }
    if(n==1){
        if(f[0]>1 || f[1]>1 || f[2]>1){
            printf("-1");
        }else if(b[0]==-1){
            printf("0");
        }else{
            printf("%d",b[0]);
        }
    }
    if(n==2){
        if(f[0]>1 || f[1]>1 || f[2]>1){
            printf("-1");
        }else if(b[0]==0){
            printf("-1");
        }else{
            if(b[0]==-1){
                printf("1");
            }else{
                printf("%d",b[0]);
            }
            if(b[1]==-1){
                printf("0");
            }else{
                printf("%d",b[1]);
            }
        }
    }
    if(n==3){
       if(f[0]>1 || f[1]>1 || f[2]>1){
            printf("-1");
        }else if(b[0]==0){
            printf("-1");
        }else{
            if(b[0]==-1){
                printf("1");
            }else{
                printf("%d",b[0]);
            }
            if(b[1]==-1){
                printf("0");
            }else{
                printf("%d",b[1]);
            }
            if(b[2]==-1){
                printf("0");
            }else{
                printf("%d",b[2]);
            }
        } 
    }
    printf("\n");
    //printf("%d %d %d\n",f[0],f[1],f[2]);
    return 0;
}