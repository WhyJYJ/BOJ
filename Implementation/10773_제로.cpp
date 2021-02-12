#include <cstdio>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int k, input, sum=0;
	scanf("%d", &k);
	
	for(int i=0;i<k;i++) {
		scanf("%d", &input);
		if(input!=0) {
			s.push(input);
		}
		else s.pop();
	} 
	
	int n = s.size();
	
	for(int i=0;i<n;i++) {
		sum += s.top();
		s.pop();
	}
	
	printf("%d", sum);
	return 0;
}
