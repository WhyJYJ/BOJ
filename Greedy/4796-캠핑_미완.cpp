#include <cstdio>
#include <vector>
#include <algorithm> 
using namespace std;

vector<int> vec;

int main() {
	int l,p,v,n=0;
	scanf("%d%d%d",&l,&p,&v);
	
	n += v/(l+p-l)*l;
	n += v%(l+p-l);
	printf("%d", n);
	
	return 0;
}
