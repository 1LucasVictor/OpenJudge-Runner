#include<stdio.h>
  
int main(void)
{
    while (1) {
        char str_num[1001];
  
        scanf("%s", str_num);
  
        if (str_num[0] == '0') break;
  
        int i = 0;
        int sum = 0;
  
        do {
            sum += (str_num[i] - '0');
            i++;
        } while (str_num[i] != '\0');
  
        printf("%d\n", sum);
    }
  
    return 0;
}
