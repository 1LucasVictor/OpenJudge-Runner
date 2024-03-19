#include<stdio.h>
#include<string.h>

int main(){
    int a;
    int box[1000000];
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        scanf("%d", &box[i]);
    }

    for(int i = 0; i < a - 1; i++){
        for(int j = i + 1; j < a; j++){
            if(box[i] == box[j]){
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;


}