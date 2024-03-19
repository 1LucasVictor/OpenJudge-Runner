#include <stdio.h>

void freq(unsigned ara[], unsigned size, unsigned frequency[]) {for(int x=0; x<size; x++) frequency[ara[x]]++;} //Initialize frequency array first

int main()
{
unsigned n, i, ara[200001]={}, frq[200001]={};
scanf("%u", &n);
for(i=1; i<n; ++i) scanf("%u", &ara[i]);
freq(ara, n, frq);
for(i=1; i<=n; ++i) printf("%u\n", frq[i]);
return 0;
}
