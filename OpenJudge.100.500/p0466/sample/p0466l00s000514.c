//https://atcoder.jp/contests/abc164/tasks/abc164_c

    #include <stdio.h>
    #include <string.h>

    int main(void)
    {
        int i,l,flg = 0;
        char s[11],t[11];
        scanf("%s",&s);
        scanf("%s",&t);

        l = strlen(s);
        for(i=0;i<l;i++){
            if(s[i]!=t[i]){
                flg =  1;
                break;
            }
        }

        if(flg == 1){printf("No\n");}
        else{printf("Yes\n");}
        
        return 0;
    }