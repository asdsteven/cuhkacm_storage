#include <cstdio>
using namespace std;
long long b,p,m;
long long power(long long a){
	if(!a)return 1%m;
	if(a&1)return b*power(a-1)%m;
	long long t=power(a/2);
	return t*t%m;
}
int main(){
	while(scanf("%lld%lld%lld",&b,&p,&m)==3)printf("%lld\n",power(p));
    return 0;
}
