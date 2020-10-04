#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX = 100000;
int score[2][MAX], dp[MAX][3], n;

int f(int c, int status) {
	if(c==n) return 0;
	if(dp[c][status] != -1) return dp[c][status]; // already calculated
	
	int result = f(c+1,0); // case 3 : not detach at c
	if(status != 1) result = max(result, f(c+1,1) + score[0][c]);
	// case 2 : detach upper one at c + f(c+1,1)
	if(status != 2) result = max(result, f(c+1,2) + score[1][c]);
	// dp array update
	dp[c][status] = result;
	return result;
}

int main() {
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++) {
		scanf("%d", &n);
		for(int j=0;j<2;j++) {
			for(int k=0;k<n;k++) {
				scanf("%d", &score[j][k]);
			}
		}
		// dp init
		for(int t=0;t<n;t++) {
			for(int j=0;j<3;j++) {
				dp[t][j] = -1;
			}
		}
		// use dp
		printf("%d\n", f(0,0));
	}
	return 0;
}
