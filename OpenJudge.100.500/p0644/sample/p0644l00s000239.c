# include <stdio.h>

int main(){
    char str[4];
    scanf("%s", str);
    int ma = 0;
    
    for (int i =0; i < 3; ++i){
        if (str[i] == '1')
            ma += 1;
    }
    printf("%d\n", ma);
    
    return 0;
}