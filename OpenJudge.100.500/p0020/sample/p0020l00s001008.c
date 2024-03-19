#include <stdio.h>

int main(void){
    int i,j,n;float m[8],e;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<8;j++){scanf("%f",&m[j]);}
	m[2] -= m[0];
	m[3] -= m[1];
	m[6] -= m[4];
	m[7] -= m[5];
        //e=(m[3]-m[1])*(m[6]-m[4])-(m[7]-m[5])*(m[2]-m[0]);
	if(m[7] * m[2] == m[6] * m[3]) printf("YES\n");
	else printf("NO\n");
        //printf("%s\n",(e==0)?"YES":"NO");
    }
    return 0;
}
/*
int main(){
      
    int n;
      
    float x[4], y[4];
      
    scanf("%d",&n);
      int i, loop;
    for(loop = 0; loop < n; loop++){
        for(i = 0; i < 4; i++){
		scanf("%f",&x[i]);
		scanf("%f",&y[i]);
        }
        x[1] -= x[0];
        y[1] -= y[0];
        x[3] -= x[2];
        y[3] -= y[2];
        if(x[3] * y[1] == y[3] * x[1]){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
      
    return 0;
}
*/

