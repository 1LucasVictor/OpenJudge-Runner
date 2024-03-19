#include <stdio.h>

int main(void)
{
    int keta, M,  i, t, number;
    int ket[30] = {0};
    int num[30] = {1};
    int data[50] = {0};

    number = 0;

    scanf("%d%d", &keta, &M);

    for(i = 1;i <= M; i++){
        scanf("%d", &ket[i]);
        scanf("%d", &num[i]);
    }

    for(i = 1;i<=M;i++){
        for(t = 1; t<=M; t++){
            if((ket[i] == ket[t] && num[i] != num[t]) || (ket[i] == 1 && num[i] == 0))
            number = 1;

        }

    }

    if (number){
        printf("%d", -number);
    }

    else{
        for(i = 1;i<=M;i++){
            switch(ket[i]){
                case 1: data[1] = num[i]; break;
                case 2: data[2] = num[i]; break;
                case 3: data[3] = num[i]; break;
                
            }
        }

        if(keta == 1){
            number = data[1];
        }
        else if (keta == 2){
            number = 10*data[1] + data[2];
        }
        else number = 100*data[1] + 10*data[2] +data[3];

        printf("%d", number);
    }
    return 0;
}