#include<stdio.h>

int main(){
        int N;
        int i,j,k,l,m;
        int L[1000][3];

        scanf("%d",&N);
        
        for(i = 0; i < N; i++){
                scanf("%d",&L[i][0]);
                scanf("%d",&L[i][1]);
                scanf("%d",&L[i][2]);
        }

        for(j = 0; j < N; j++){
                for(k = 0; k < 2; k++){
                        for(l = 0; l < 2; l++){
                                if(L[j][l] < L[j][l+1]){
                                        int num = L[j][l+1];
                                        L[j][l+1] = L[j][l];
                                        L[j][l] = num;
                                }
                        }
                }
        }


        for(m = 0; m < N; m++){
                if(L[m][0] * L[m][0] == L[m][1] * L[m][1] + L[m][2] * L[m][2]){
                        printf("YES\n");
                }else{
                        printf("NO\n");
                }
        }

        return 0;
}