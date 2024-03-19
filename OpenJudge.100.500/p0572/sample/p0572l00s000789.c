#include<stdio.h>
#include<math.h>
int main(){
    int L,R;
    scanf("%d %d",&L,&R);
    int i,j;
    int k,l;
    int min=2018;
    //int minj=2018;
    int J;
    if(R-L>=2018){
        printf("0\n");
    }
    else{
    for(k=L;k<=R;k++){
        for(l=k+1;l<=R;l++){
            J = (k*l)%2019;
            if(J<min){
                min=J;
            }
        }
        
    }
   // printf("%d %d\n",mini,minj);
    printf("%d\n",min);
    }
    return 0;
}