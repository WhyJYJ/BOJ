#include <cstdio>
#include <vector>
using namespace std;

int main() {
	vector<int> input;
	int n, i, cnt=0, ans;
	scanf("%d", &n);
	input.resize(n);
	
	for(i=0;i<n;i++) {
		scanf("%d", &input[i]);
	}
	
	scanf("%d", &ans);
	
	for(i=0;i<n;i++) {
		if(input[i]==ans) cnt++;
	}
	
	printf("%d", cnt);
	return 0;
}
