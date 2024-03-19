#include <stdio.h>
#include <float.h>
 
int main()
{
float x[4], y[4], AB, CD;
int i, j, n;
     
scanf("%d", &n);
for (i = 0; i < n; i++){
for (j = 0; j < 4; j++){
scanf("%f %f", &x[j], &y[j]);
}
         
if (x[1] == x[0]){
AB = DBL_MAX;
}
else {  
AB = (y[1] - y[0]) / (x[1] - x[0]);
}
if (x[3] == x[2]){
CD = DBL_MAX;
}
else {
CD = (y[3] - y[2]) / (x[3] - x[2]);
}
if (AB == CD){
printf("YES\n");
}
else {
printf("NO\n");
}
}
return 0;
}