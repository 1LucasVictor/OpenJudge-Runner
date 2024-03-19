#include<stdio.h>
int main(void){
int a, b, c, d, e, k, ch=0;
scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &k);
int A[10]={a, b, c, d, e, k}, B[10]={a, b, c, d, e, k};
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if((i!=j) && (A[i]>B[j]) && (A[i]-B[j])>16){
            ch+=1;
        }else if((i!=j) && (A[i]<B[j]) && (A[j]-B[i])>16){
            ch+=1;
        }
    }
}
if(ch==0){
    printf("Yay!\n");
}else{
    printf(":(\n");
}
return 0;
}