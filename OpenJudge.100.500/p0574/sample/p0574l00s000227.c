    # include <stdio.h>
     
    int main (void){
        char first, second, third, forth;
        scanf("%s" "%s" "%s" "%s", &first, &second, &third, &forth);
        if(first != second && second != third && third != forth){
            printf("Good\n");
        }
        else{
            printf("Bad\n");
        }
    }