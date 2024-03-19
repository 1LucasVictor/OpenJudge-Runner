#include<stdio.h>
#include<string.h>


//文字列Sの中に#が2つ連続で入っているかを調べる
//入っているなら1,入っていないなら0を返す
int check_sharp(int N, char S[N])
{
    int count = 0;    
    for(int i = 0;i < N; i++){
        if(S[i] == '#'){
            count = count + 1;
            if(count >= 2){
                return 1;
            }
        }
        else{
            count = 0;
        }
    }
    return 0;
    
                    
}

//文字列Sの中に.が３つ以上並んでいるところがあるかを調べる
//あるなら0, ないなら１を返す
int check_indent(int N, char S[N])
{
    int count = 0;    
    for(int i = 0;i < N; i++){
        if(S[i] == '.'){
            count = count + 1;
            if(count >= 3){
                return 0;
            }
        }
        else{
            count = 0;
        }
    }
    return 1;
}


int main()
{
    int N, A, B, C, D;
    char S[N];
    int flag1 = 0;
    int flag2 = 0;
    
    scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
    scanf("%s", S);
    if(C > D){
        flag1 = check_indent(N, S);
        flag2 = check_sharp(N, S);
        if(flag1 == 0 && flag2 == 0){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    else{
        if(check_sharp(N, S) == 0){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }

    return 0;
}
