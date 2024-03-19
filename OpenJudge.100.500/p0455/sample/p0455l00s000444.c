#pragma GCC optimize("Ofast")
#include<stdio.h>
int main(void)
{
    switch(getchar_unlocked())
    {
      case '2': puts("14"); return 0;
      case '3': puts("39"); return 0;
      case '4': puts("84"); return 0;
      case '5': puts("155"); return 0;
      case '6': puts("258"); return 0;
      case '7': puts("399"); return 0;
      case '8': puts("584"); return 0;
      case '9': puts("819"); return 0;
      default: switch(getchar_unlocked())
      {
        case '0': puts("1110"); return 0;
        default: puts("3");
      }
    }
    return 0;
}
