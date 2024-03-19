#include <stdio.h>
int pm(int n){
    int i,j,c=n-1,target[n-1];
    for(i=0;i<n-1;i++){target[i]=i+2;}
    for(i=0;i<n-1;i++){
        if (!target[i]){continue;}
        for(j=i;j<n-1;j=j+i+2){
            if (!target[j]){continue;}
            if (j!=i && target[j]%target[i]==0){target[j]=0;c--;}
        }
    }
    return c; 
} 

int main(void){
    int d,ds[30],c=0,i;
    while(scanf("%d",&d)!=EOF){
        ds[c]=pm(d);c++;
    }
    for(i=0;i<c;i++){printf("%d\n",ds[i]);}
    return 0;
}

    

