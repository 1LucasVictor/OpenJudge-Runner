#include <stdio.h>

int main(){
int d,n;
scanf("%d %d",&d,&n);

/* d := 100でちょうどd回割り切れる数 */
/* N := そのうちn番目に小さい数 */
int sum = 1;
while(d){
	sum *= 100;
	d--;
}

if(n != 100)
	sum *= n;
else
	sum *= (n+1);

printf("%d\n",sum);


return 0;
}
