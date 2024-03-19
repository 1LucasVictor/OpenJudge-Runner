#include<stdio.h>
int main(){
	int a,i=0,u=0,e=0,o,yama[1001]={},ka,ki,ku,sa,si,su;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		ka=0;
		scanf("%d %d %d",&u,&e,&o);
		if(ka<u){ka=u;ki=e;ku=o;}
		if(ka<e){ka=e;ki=o;ku=u;}
		if(ka<o){ka=o;ki=e;ku=u;}
		sa=ka*ka;
		si=ki*ki;
		su=ku*ku;
//		if(sa==si+su)yama[i]=1;
			if(sa==si+su){printf("YES\n");}else{printf("NO\n");}
	}
	/*for(i=0;i<a;i++){
				if(yama[i]==1){printf("Yes\n");}else{printf("No\n");
				}
	}*/
	return 0;
	
	
}