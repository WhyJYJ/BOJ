#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 같은 무게가 있을 수 있다는 것에 주의
// ans를 업데이트 할 때 ""ans 값 기준""으로 비교를 해야 한다는 것 놓쳤음 

int main() {
	vector<int> input;
	int n, in, ans=0;
	cin>>n;
	
	for(int i=0;i<n;i++) {
		cin>>in;
		input.push_back(in);
	}
	sort(input.begin(), input.end());
	
	for(int i=0;i<n;i++) {
		/***if(input[i]==input[i+1]) {
			ans = input[i] * (n-i);
		} 
		else if(input[i]*(n-i) > input[i+1]*(n-i-1)){
			ans = input[i] * (n-i);
		}
		else {
			ans = input[i+1]*(n-i-1);
		}***/
		if(ans<input[i] * (n-i)) ans = input[i] * (n-i);
	}
	cout<<ans;
	
	return 0;
}
