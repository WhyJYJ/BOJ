#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ���� ���԰� ���� �� �ִٴ� �Ϳ� ����
// ans�� ������Ʈ �� �� ""ans �� ����""���� �񱳸� �ؾ� �Ѵٴ� �� ������ 

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
