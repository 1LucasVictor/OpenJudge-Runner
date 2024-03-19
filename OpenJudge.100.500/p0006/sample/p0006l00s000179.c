#include <stdio.h>
int main(){
    int n,i,kin2;
    double kin=100000,risoku=1.05;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        kin=kin * risoku;
        kin2=(int)(kin/1000+0.9);
        kin = kin2*1000;
	}
    kin2 = kin;
    printf("%d\n",kin2);
	return 0;
}