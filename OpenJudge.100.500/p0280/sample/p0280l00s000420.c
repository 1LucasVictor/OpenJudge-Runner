#include <stdio.h>

int main(void){
    int n, array[100][100],i,j,minweight=2001,total=0,flag[100],k=1,minnum[100],num=0;
    
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&array[i][j]);
    }
    flag[i]=0;
}
minnum[0]=0;
flag[0]=1;
while(k<n){
    minweight=2001;
for(i=0;i<k;i++){
    for(j=0;j<n;j++){
        if(array[minnum[i]][j]!=-1){
            if(minweight>array[minnum[i]][j] &&flag[j] == 0){
                minweight=array[minnum[i]][j];
                num=j;
            }
        }
       
    }
}
minnum[k]=num;
flag[num]=1;
total+=minweight;
k++;
}
printf("%d\n",total);
return 0;
}