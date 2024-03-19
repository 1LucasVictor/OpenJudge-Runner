
#include <stdio.h>

int main (){
int paper, page;
scanf("%d", &page);
do {
page-=2;
paper++;
} 
while (page > 0);
printf("%d", paper);
return 0;
}