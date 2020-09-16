#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;

// 물 새는 곳 위치 정렬 안 되어 있는 거 주의!
int main() {
	// 물 새는 곳 1000이하 자연수이므로 start=0으로 시작 
	int n,l,cnt=0,start=0;
	scanf("%d%d", &n, &l);
	vec.resize(n);
	for(int i=0;i<n;i++) {
		scanf("%d", &vec[i]);
	}
	sort(vec.begin(), vec.end());
	
	
	for(int i=0;i<n;i++) {
		// 물 세는 곳 vec[i]가 안 막혀있으면 테이프 붙이기
		// start + (l-1)까지는 자동으로 수리 
		if(start<vec[i]) {
			start = vec[i] + (l-1);
			cnt++;
		}
	}
	
	printf("%d",cnt);
	return 0;
}
