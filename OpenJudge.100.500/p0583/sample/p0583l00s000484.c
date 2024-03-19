#include <stdio.h>
#include <stdbool.h>

int main(void){
    int i,j,k;
    int N,A,B,C,D;
    char S[200002];
    bool array[200002],flag;
    
    scanf("%d %d %d %d %d\n",&N,&A,&B,&C,&D);
    scanf("%s",S);
    
    for(i = 0;i < N;i++){
        if(S[i] == '.') array[i] = true;
        else array[i] = false;
    }
    
    int now1;
    //酢抜け先行
    array[B - 1] = false;
    now1 = A - 1;
    while(1){
        if(array[now1 + 1] == true) now1++;
        else if(array[now1 + 2] == true) now1 += 2;
        else if(array[now1 + 1] == false && array[now1 + 2] == false){
            flag = false;
            break;
        }
        if(now1 == C - 1){
            flag = true;
            break;
        }
    }
    array[C - 1] = false;
    now1 = B - 1;
    while(flag){
        if(array[now1 + 1] == true) now1++;
        else if(array[now1 + 2] == true) now1 += 2;
        else if(array[now1 + 1] == false && array[now1 + 2] == false){
            flag = false;
            break;
        }
        if(now1 == D - 1){
            if(flag){
                printf("Yes\n");
                return 0;
            }
        }
    }
    
    //腑抜け先行
    for(i = 0;i < N;i++){
        if(S[i] == '.') array[i] = true;
        else array[i] = false;
    }
    now1 = B - 1;
    while(1){
        if(array[now1 + 1] == true) now1++;
        else if(array[now1 + 2] == true) now1 += 2;
        else if(array[now1 + 1] == false && array[now1 + 2] == false){
            flag = false;
            break;
        }
        if(now1 == D - 1){
            flag = true;
            break;
        }
    }
    array[D - 1] = false;
    now1 = A - 1;
    while(flag){
        if(array[now1 + 1] == true) now1++;
        else if(array[now1 + 2] == true) now1 += 2;
        else if(array[now1 + 1] == false && array[now1 + 2] == false){
            flag = false;
            break;
        }
        if(now1 == C - 1){
            if(flag){
                printf("Yes\n");
                return 0;
            }
        }
    }
    
    printf("No\n");
    
    
    return 0;
}