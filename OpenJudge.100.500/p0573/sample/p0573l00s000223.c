#include <stdio.h>
#include <string.h>

#define LENGTH 256

int main(void) {
    char input[LENGTH];
    int r, i, cmp;
    int count1 = 0;
    int count2 = 0;
    char n[4];
    fgets(input, LENGTH-1, stdin);
    sscanf(input, "%s", n);

    for(i = 0; i < 4; i++){
        for(r = i + 1; r < 4; r++){
            if(n[i] == n[r]){
                if(count1 == 0 && count2 == 0){
                    count1++;
                }else{
                    count2++;
                } 
            }
        }
    }
    if(count1 == 1 && count2 ==1){
        printf("%s\n","Yes");
    }else{
        printf("%s\n","No");
    }
    return 0;
}