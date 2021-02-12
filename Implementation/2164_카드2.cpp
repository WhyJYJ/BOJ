#include <cstdio>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	int n;
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)  {
		q.push(i);
	}
	
	int num = q.size();
	int bak;
	
	while(num!=1) {
		q.pop();
		bak = q.front();
		q.pop();
		q.push(bak);
		num--;
	}
	
	bak = q.front();
	
	printf("%d", bak);
	
	return 0;
}
