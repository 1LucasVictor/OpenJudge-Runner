#include<stdio.h>
int main(void)
{
    int j,N,len[3],a[3],b[3],i;
    scanf("%d",&N);
    for(j=0;j<N;j++){
    scanf("%d%d%d",&len[0],&len[1],&len[2]);

        for(i=0;i<3;i++){
            a[i]=len[i]*len[i];
        }
    b[0]=a[0]+a[1];
    b[1]=a[0]+a[2];
    b[2]=a[1]+a[2];
   
        if(b[0]==a[2]||b[1]==a[1]||b[2]==a[0]){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;

}