#include <cstdio>

using namespace std;

int snum[50];

int samgak(int n) {
	return n*(n+1) / 2;
}

void cal() {
	for(int i=0;i<50;i++) {
		snum[i] = samgak(i+1);
	}
}

int is_eureka(int n) {
	for(int i=0;i<50;i++) {
		for(int j=0;j<50;j++) {
			for(int k=0;k<50;k++) {
				if(n == snum[i]+snum[j]+snum[k]) {
					return 1;
				}
			}
		}
	}
	return 0;
}

int main() {
	int n, num;
	scanf("%d", &n);
	cal();
	
	for(int i=0;i<n;i++) {
		scanf("%d", &num);
		printf("%d\n", is_eureka(num));
	}
	return 0;
}
