#include <stdio.h>
int main (){
int gatos, animais, X;
scanf("%d%d%d", &gatos,&animais,&X);
if (X > animais){
    printf("NO");
}
else if (X <= animais && animais > gatos){
    printf("YES");
}
else if (animais < gatos){
    printf("NO");
}
	return 0;
}