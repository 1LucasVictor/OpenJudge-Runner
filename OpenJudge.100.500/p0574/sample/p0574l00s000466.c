    # include <stdio.h>
     
    int main (void){
        char w, x, y, z;
        scanf("%s" "%s" "%s" "%s", &w, x, &y, &z);
        if(x != y && y != z && w != x){
            printf("Good\n");
        }
        else{
            printf("Bad\n");
        }
    }