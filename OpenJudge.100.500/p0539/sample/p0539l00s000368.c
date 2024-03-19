#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool res=false;
    scanf("%d", &n);

    int x[20], y[20];

    for (int i = 1; i <10 ; ++i) {
        for (int j = 1; j <10 ; ++j) {
            x[i]=i;
            y[j]=j;
            if(x[i]*y[j]==n) res=true;
        }

    }
    while(res){
        printf("Yes");
        return 0;
    }
    printf("No");
}