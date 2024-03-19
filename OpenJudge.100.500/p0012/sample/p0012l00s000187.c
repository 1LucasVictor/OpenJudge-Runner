#include<stdio.h>

int main(void)
{
        int input = 0,train[10];
        int i = 1;

        for(i=1;i<=10;i++)
        {
                train[10] = 0;
        }


        i = 1;
        while(scanf("%d",&input) != EOF)
        {

                if(input != 0)
                {
                        train[i] = input;
                        i++;
                }
                else if(input == 0)
                {
                        i--;
                        printf("%d\n",train[i]);
                }
        }
        return 0;
}