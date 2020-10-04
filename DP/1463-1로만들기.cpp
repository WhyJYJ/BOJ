#include <cstdio>
#include <algorithm>

const int MAX = 1000001;
using namespace std;
int dp[MAX];

int F(int n) {
	// Base Case
	if(n==1) return 0;
	// �̹�  ���� ���� �ִ� ��� �ٷ� ���� 
	if(dp[n] != -1) return dp[n];
	// ���� ��� ���� ��� 
	int result = F(n-1) + 1;
	if(n%3 == 0) result = min(F(n/3) + 1, result);
	if(n%2 == 0) result = min(F(n/2) + 1, result);
	// ���� ����� �� ���� 
	dp[n] = result;
	return result;
}

int main() {
	int x;
	scanf("%d", &x);
	fill(dp,dp+MAX,-1);
	printf("%d\n", F(x)); 
	
	return 0;
}
