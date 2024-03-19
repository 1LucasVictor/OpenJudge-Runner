#include <stdio.h>
int main(void) 
{
    int N, M, s[100], c[100], i,t, number;
    int num[40] = {0};
    number = 0;
 
    scanf("%d%d", &N, &M);
 
    for (i = 1; i <= M; i++){
        scanf("%d%d", &s[i], &c[i]);
    }
 
    for (i = 1; i <= M; i++){
        if (N != 1 && s[i] == 1 && c[i] == 0)
        number = -1;
    }
 
    for (i = 1; i <= M; i++){
        for (t = 1; t <= M; t++){
            if (s[i] == s[t] && c[i] != c[t])
                number = -1;
        }
    }
 
    if (number == -1)
        printf("%d", number);    
    
    else{
        for (i = 1; i <= M; i++){
            switch (s[i]){
                case 1: num[1] = c[i]; break;
                case 2: num[2] = c[i]; break;
                case 3: num[3] = c[i]; break;
            }
        }
    if (N == 2 && num[1] == 0)
        num[1] = 1;
    if (N == 3 && num[1] == 0)
        num[1] = 1;
        
    if (N == 1)
        printf("%d", num[1]);
    else if (N == 2)
        printf("%d", 10*num[1] + num[2]);
    else 
        printf("%d", 100*num[1] + 10*num[2] + num[3]);
    }
    return 0;
}