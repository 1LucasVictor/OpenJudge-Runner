
#include<stdio.h>

int main(){
    int n, i, j, k, l, cnt, m;
    while(scanf("%d", &n) != EOF){
        cnt = 0;
        for(i=0; i<10; i++){
            for(j=0; j<10; j++){
                for(k=0; k<10; k++){
                    for(l=0; l<10; l++){
                        m=i+j+k+l;
                        if(m==n) cnt++;
                    }
                }
            }
        }
    printf("%d\n", cnt);
    }
}