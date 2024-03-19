#include <stdio.h>
int main(){
  int A[101][101],a[101],flag[101];
    int n,i,j,k=1,m=0,v,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
	  scanf("%d",&A[i][j]);
    a[0] = 0;
    flag[0] = 1;
    for(i =1;i<n;i++){
      flag[i]=0;
    }
    while(1){
        v=2000;
        for(i=0;i<k;i++){
            for(j=0;j<n;j++){
                if(A[a[i]][j]<v&&A[a[i]][j]!=-1&&flag[j]!=1){
                    v=A[a[i]][j];
                    m=j;
                }
            }
        }
        if(k!=n){
            a[k]=m;
            flag[m]=1;
            sum+=v;
            k++;
        }
        else break;
    }
    printf("%d\n",sum);
    return 0;
} 

