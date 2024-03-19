#include <stdio.h>
int main(){
    int n,i,kei;
    double kin=100000,ri=1.05;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        kin = kin * ri;
        kei = (int)(kin/1000+0.9);
        kin = kei * 1000;
    }
    kei=kin;
    printf("%d\n",kei);
	return 0;
}