#include <stdio.h>
int main(void)
{
    int i,H,N,A[100000];
    scanf("%d %d",&H,&N);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
        H -= A[i];
    }
    if(H <= 0)printf("Yes");
    else printf("No");
	return 0;
}