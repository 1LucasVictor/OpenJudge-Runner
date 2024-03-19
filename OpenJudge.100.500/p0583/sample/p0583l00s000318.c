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
    int tempA,tempB;
    tempA = A;
    tempB = B;
    
    int now1;
    //酢抜け先行
    array[B - 1] = false;
    now1 = A - 1;
    while(1){
        if(array[now1 + 1] == true){
            array[now1] = true;
            now1++;
            array[now1] = false;
        }else if(array[now1 + 2] == true){
            array[now1] = true;
            now1 += 2;
            array[now1] = false;
        }else if(array[now1 + 1] == false && array[now1 + 2] == false){
            if(B-1 == now1 + 1 && array[B - 1 + 2] == true){
                array[B - 1] = true;
                B += 2;
                array[B - 1] = false;
            }else if(B-1 == now1 + 2 && array[B - 1 + 1] == true){
                array[B - 1] = true;
                B++;
                array[B - 1] = false;
            }else if(B-1 == now1 + 2 && array[B - 1 + 2] == true){
                array[B - 1] = true;
                B += 2;
                array[B - 1] = false;
            }else{
                flag = false;
                break;
            }
        }
        if(now1 == C - 1){
            flag = true;
            break;
        }
    }
    now1 = B - 1;
    while(flag && now1 <= D){
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
    
    
    for(i = 0;i < N;i++){
        if(S[i] == '.') array[i] = true;
        else array[i] = false;
    }
    A = tempA;
    B = tempB;
    
    //酢抜け先行
    array[A - 1] = false;
    now1 = B - 1;
    while(1){
        if(array[now1 + 1] == true){
            array[now1] = true;
            now1++;
            array[now1] = false;
        }else if(array[now1 + 2] == true){
            array[now1] = true;
            now1 += 2;
            array[now1] = false;
        }else if(array[now1 + 1] == false && array[now1 + 2] == false){
            if(A-1 == now1 + 1 && array[A - 1 + 2] == true){
                array[A - 1] = true;
                A += 2;
                array[A - 1] = false;
            }else if(A-1 == now1 + 2 && array[A - 1 + 1] == true){
                array[A - 1] = true;
                A++;
                array[A - 1] = false;
            }else if(A-1 == now1 + 2 && array[A - 1 + 2] == true){
                array[A - 1] = true;
                A += 2;
                array[A - 1] = false;
            }else{
                flag = false;
                break;
            }
        }
        if(now1 == D - 1){
            flag = true;
            break;
        }
    }
    now1 = A - 1;
    while(flag && now1 <= C){
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