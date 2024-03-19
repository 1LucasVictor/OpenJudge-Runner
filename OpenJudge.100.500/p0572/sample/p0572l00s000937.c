#include<stdio.h>
int main(){
    int L,R;
    scanf("%d %d",&L,&R);
    int i,j;
    int k,l;
    int mini=2018;
    int minj=2018;
    int J;
    for(k=L;k<=R;k++){
        i = k%2019;
        if(i<mini){
            J=k;
           mini=i;
        }
    }
    for(l=J+1;l<=R;l++){
         j = l%2019;
        if(j<minj){
            minj=j;
        }
    }
   // printf("%d %d\n",mini,minj);
    printf("%d\n",(mini*minj)%2019);

    return 0;
}