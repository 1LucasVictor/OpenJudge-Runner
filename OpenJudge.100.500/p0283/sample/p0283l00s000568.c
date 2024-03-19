#include <stdio.h>

void print(int a[8][8]){
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(a[i][j]==0){
                printf(".");
            }else{
                printf("Q");
            }
        }
        printf("\n");
    }
}

int exist(int i,int j,int a[8][8]){
    if(existT(j,a)==1){return 1;}
    if(existN1(i,j,a)==1){return 1;}
    if(existN2(i,j,a)==1){return 1;}
    return 0;
}

int existT(int j,int a[8][8]){
    int i;
    for(i=0;i<8;i++){
        if(a[i][j]==1){
            return 1;
        }
    }
    return 0;
}

int existN1(int i,int j,int a[8][8]){
    if(i>j){
        i-=j;j=0;
    }else{
        j-=i;i=0;
    }
    while(i<8&&j<8){
        if(a[i][j]==1){
            return 1;
        }
        i++;j++;
    }
    return 0;
}

int existN2(int i,int j,int a[8][8]){
    if(i>7-j){
        i-=(7-j);j=7;
    }else{
        j+=i;i=0;
    }
    while(i<8&&j>=0){
        if(a[i][j]==1){
            return 1;
        }
        i++;j--;
    }
    return 0;
}

int search(int i,int a[8][8]){
    int j,flg=0;
    for(j=0;j<8;j++){
        if(a[i][j]==1){
            flg=1;break;
        }
    }
    if(flg==1){
        if(i==7){print(a);return 1;}
        return search(i+1,a);
    }else{
        flg=0;
        for(j=0;j<8;j++){
            if(exist(i,j,a)==1){continue;}
            a[i][j]=1;
            if(i==7){print(a);return 1;}
            if(search(i+1,a)==1){return 1;}
            a[i][j]=0;
        }
    }
    return 0;
}

int main(void){
    int a[8][8];
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            a[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d",&j);
        scanf("%d",&k);
        a[j][k]=1;
    }
    search(0,a);
}

