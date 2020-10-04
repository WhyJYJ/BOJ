#include <cstdio>

using namespace std;

int arr[50][2];
int rank[50];

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++) {
		scanf("%d%d", &arr[i][0], &arr[i][1]);
	}
	
	for(int i=0;i<n;i++) {
		rank[i] = 1;
	}
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
				rank[i] += 1;
			}
		}
	}
	
	for(int i=0;i<n;i++) {
		printf("%d", rank[i]);
		if(i!=n) {
			printf(" ");
		}
	}
	
	return 0;
}
