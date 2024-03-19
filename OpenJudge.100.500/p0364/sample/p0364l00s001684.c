#include<stdio.h>
int main()
{
int W, H, x, y, r, a, b;
scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
 
a=W-x;
b=H-y;
if(x<r || y<r){
printf("No\n");
} 
 
else if(a<r || b<r){
printf("No\n");
} 
else{
printf("Yes\n");
}
 
return 0;
}