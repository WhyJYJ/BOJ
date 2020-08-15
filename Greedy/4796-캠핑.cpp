#include <cstdio>
using namespace std;

// v%p 기준으로 케이스 분류해야 하는 거 주의! 

int main() {
	int l,p,v,n,cnt=1;
	
	while(1) {
		scanf("%d%d%d",&l,&p,&v);
		n = 0;
		
		if(l==0 && p==0 && v==0) break;
		// v/p 만큼 수열 {사용,사용,~~~,미사용} 반복됌 
		n += v/p * l;
		// v%p >= l인 경우 (위에 수열 + l)
		if(v%p >= l) n += l;
		// v%p < l인 경우 (위에 수열 + v%p) 
		else n += v%p;
		
		printf("Case %d: %d\n", cnt,n);
		cnt++;
	}
	return 0;
}
