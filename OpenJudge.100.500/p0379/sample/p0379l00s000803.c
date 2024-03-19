#include<stdio.h>
int main(void){
    int n,m,i=0,j=0,k=0;
    int a[100][100],b[100],answer;
    scanf("%d %d",&n,&m);
    while(scanf("%d",&a[i][j])==1){
        j++;
        if(j==m){ 
            i++;
            j=0;
        }
        if(i==n) break;  
    }
    while(scanf("%d",&b[k])==1){
        if(k==m-1) break;
        k++;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
          answer+=a[i][j]*b[j];
        }
         printf("%d\n",answer);
        answer=0;
    }
    return 0;
}
