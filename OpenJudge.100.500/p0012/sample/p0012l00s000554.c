#include <stdio.h>


int main(void)
{
    int stack[105], input, i;
    int topOfStack = 0;

    i = 0;
    while (scanf("%d", &input) == 1){
        
        switch (input)
        {
        case 0:
            topOfStack--;
            printf("%d\n", stack[topOfStack]);
            break;
        default:
            stack[topOfStack] = input;
            topOfStack++;
            break;
        }
        i++;
        //if(topOfStack == 0) break;
    }

    return (0);
}

