#include <stdio.h>
int main()
{

    int health, attack, times = 0;
    scanf("%d%d", &health, &attack);
    while (health > 0) {

            health -= attack;
            times += 1;

    }
    
    printf("%d\n",times);
    
    return 0;
}
