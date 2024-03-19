#include <stdio.h>
#include <string.h>

void under_s(char a[], int b)
{
int len, i;
len = strlen(a);
for(i = 0; i < b; i++){
a[len + i] = a[i];
}

for(i = 0; i < len; i++){
a[i] = a[i + b];
}
a[len] = '\0';
}


int main(void)
{
char card[500];
int n, i;
int h[128];

while(1){

scanf("%s",&card);
if( strcmp(card, "-") == 0)
break;

scanf("%d",&n);

for(i = 0; i < n; i++)
{
scanf("%d", &h[i]);
}

for(i = 0; i < n; i++){
under_s(card, h[i]);
}
printf("%s\n", card);
}
return 0;
}