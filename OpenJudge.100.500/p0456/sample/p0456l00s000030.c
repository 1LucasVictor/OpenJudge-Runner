# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
    char buff1[2*10*10*10*10*10+1];
    char buff2[2*10*10*10*10*10+1];

    fgets(buff1,sizeof(buff1),stdin);
    fgets(buff2,sizeof(buff1),stdin);
    int cnt = 0;
    for (int i = 0;i<=strlen(buff1);i++){
        if (buff1[i] != buff2[i]){
            cnt ++;
        }
    }
    
    printf("%d\n",cnt);
    return 0;
}