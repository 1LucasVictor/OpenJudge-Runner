//ABC144_B問題
#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    int flag = 0;
    scanf("%d",&x);

    for(int i=1;i<10;i++){
        for (int j = 1; j < 10; j++) {
            if(x== i*j) flag = 1;
        }
    }

    if(flag==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
