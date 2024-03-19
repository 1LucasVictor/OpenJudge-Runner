#include <stdio.h>

int Least_Common_Multiple(int a,int b){
    int result;
    result = a;
    while(result%b != 0){
        result += a;
    }
    return result;
}

int Greatest_Common_Factor(int a, int b){
    if(a > b){
        return Greatest_Common_Factor(a-b,b);
    }
    else if(a <  b){
        return Greatest_Common_Factor(a,b-a);
    }
    else{
        return a;
    }
}

int main(void) {
	int a,b;
	while(scanf("%d %d",&a,&b) != EOF){
	    printf("%d %d",Greatest_Common_Factor(a,b),Least_Common_Multiple(a,b));
	}
	return 0;
}