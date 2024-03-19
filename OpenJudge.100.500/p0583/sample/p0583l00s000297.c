#include<stdlib.h>
#include<stdio.h>

int Max(int c, int d)
{
    return c>d?c:d;
}

int main()
{
    int n, a, b, c, d;
    scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
    char s[n+1];
    int flag = 0;
    
    scanf("%s", s);

    for(int i = a - 1 ; i < Max(c, d); i++){
        if(s[i] == '#' && s[i+1] == '#'){
            printf("No");
            return 0;
        }
    }

    if(c > d){
        for(int i = b-2; i < d - 1; i++){
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                flag = 1;
            }
        }
        if(flag == 0){
            printf("No");
            return 0;
        }                    
    }
    
    
               
    printf("Yes");    
    return 0;
}
