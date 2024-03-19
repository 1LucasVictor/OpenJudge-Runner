    #include <stdio.h>
    int main(void){
        // Your code here!
        int x, y;
     
        scanf("%d%d", &x, &y);
        
        if(x*y % 2 == 0)
            printf("Even");
        else
            printf("Odd");
            
            return 0;
    }