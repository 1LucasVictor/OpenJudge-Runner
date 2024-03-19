#include <stdio.h>
#include <string.h>

int main(void)
{
char str[128];
int i;
scanf("%s", str);
fprintf(stderr, "%s\n", str);

i = strlen(str);
for (i-- ; i >= 0; i--){
printf("%c", str[i]);
}
puts("");
return (0);
}