#include<stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    int *a;
    a = (int*)malloc(sizeof(int)*N);//動的確保
    for(int i=0;i<N;i++){
    scanf("%d",&a[i]);
    }
    int checknum1=0;
    int checknum2=0;
    int flag = 0;
    for(int i=0;i<(int)N/2;i++){
        checknum1 = a[i];
        checknum2 = a[N-i];
        for(int j=0;j<N;j++){
            if(checknum1==a[j]&&i!=j){
                flag = 1;
            }
            if(checknum2==a[j]&&(N-i)!=j){
                flag = 1;
            }
        }
    }

    if(flag){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}