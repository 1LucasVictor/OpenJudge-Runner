/*#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <cmath>

using namespace std;

int main(void){
	int d, n;
	cin >> d >> n;
	if(n!=100){
		cout << n * (int)(pow(100,d)) << endl;
	}
	return 0;
}
*/

#include <stdio.h>
#include <math.h>

int main(void){
	int d, n;
	scanf("%d %d",&d,&n);
	if(n!=100){
		printf("%d",n*((int)(pow(100,d))));
	}
	return 0;
}