#include <stdio.h>
#include <string.h>

int main(void)
{
 char card[201], sub[201];
 int m, h, i, j, k;
 int c = 0;
 int l = 0;

while(1){

scanf("%s", card);

if(card[0] == '-')
 break;

scanf("%d", &m);

for(i = 0; i < 202; i++)
{
 if(card[i] != '\0')
   c++;
 else if(card[i] == '\0')
   break;
}

for(i = 0; i < m; i++)
{
 scanf("%d", &h);

for(j = 0; j < h; j++)
  sub[j] = card[j];

for(j = h; j < c; j++)
  card[j-h] = card[j];


  for(j = 0; j < h; j++)
   card[c-h+j] = sub[j];

}
 
 printf("%s\n", card);
 c = 0;

}


return 0;

}

