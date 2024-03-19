#include<stdio.h>


int main(){
    int list[3];

    int l = sizeof(list)/sizeof(int);
    for(int i=0; i < l ;i++){
        scanf("%d", &list[i]);
    }

    for(int s = 0; s < l-1; s++){
        for (int j = l - 1; j >= s + 1; j--){
            if ( list[j] < list[j-1]){
                int tmp;
                tmp = list[j];
                list[j] = list[j-1];
                list[j-1] = tmp;
            }
        }
    }

    for(int j = 0; j < l-1; j++){
        printf("%d ", list[j]);
    }
    printf("%d\n", list[l-1]);
}

