#include <cstdio>

using namespace std;
int arr[1000001];

int sum(int k) {
	int ssum=k;
	int devisor = 1000000;
	while(devisor != 0) {
		ssum += k/devisor;
		k %= devisor;
		devisor /= 10;
	}
	return ssum;
}

int main() {
	int n, flag=0;
	scanf("%d", &n);
	
	for(int i=1;i<1000001;i++) {
		arr[i] = sum(i);
	}
	
	for(int i=1;i<1000001;i++) {
		if(arr[i] == n) {
			printf("%d", i);
			flag=1;
			break;
		}
	}
	
	if(flag==0) printf("%d", 0);
	
	return 0;
}


