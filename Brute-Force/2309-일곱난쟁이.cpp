#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> height;
	height.resize(9);
	int sum = 0;
	int bak;
	int flag = 0;
	for(int i=0;i<9;i++) {
		scanf("%d", &height[i]);
		sum += height[i];
	}
	for(int i=0;i<9;i++) {
		bak = sum - height[i];
		for(int j=i+1;j<9;j++) {
			if(bak - height[j] == 100) {
				height[i] = 0;
				height[j] = 0;
				flag = 1;
				break;
			}
		}
		if(flag==1) break;
	}
	sort(height.begin(), height.end());
	
	for(int i=0;i<9;i++) {
		if(height[i] != 0) printf("%d\n", height[i]);
	}
	
	
	return 0;
}
