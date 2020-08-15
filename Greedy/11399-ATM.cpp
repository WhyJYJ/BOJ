#include <cstdio>
#include <vector>
#include <algorithm> 
using namespace std;

vector<int> vec;

int main() {
	int n, result=0;
	scanf("%d",&n);
	vec.resize(n);
	
	for(int i=0;i<n;i++) {
		scanf("%d", &vec[i]);
	}
	
	sort(vec.begin(), vec.end());
	
	for(int i=0;i<n;i++) {
		result += (n-i)*vec[i];
	}
	
	printf("%d",result);
	
	return 0;
}
