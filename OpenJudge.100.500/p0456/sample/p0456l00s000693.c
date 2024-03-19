# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
    char buff1[20000];
    char buff2[20000];

    if(fgets(buff1,sizeof(buff1),stdin)== NULL) return -1;
    if(fgets(buff2,sizeof(buff1),stdin)== NULL) return -1;
    int cnt = 0;
    for (int i = 0;i<=strlen(buff1);i++){
        if (buff1[i] != buff2[i]){
            cnt ++;
        }
    }
    
    printf("%d\n",cnt);
    return 0;
}