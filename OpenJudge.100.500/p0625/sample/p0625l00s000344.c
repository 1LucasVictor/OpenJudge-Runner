#include <stdio.h>


int main()
{
	int A, B, t = 16, a = 0, b = 0;
    scanf("%d %d", &A, &B);
    while(t > 0){
        if(a < A && t % 2 == 0)
            a++;
        else if(b < B && t % 2 != 0)
            b++;
        t--;
    }
    if(a == A && b == B)
        printf("Yay!\n");
    else
        printf(":(\n");
}

