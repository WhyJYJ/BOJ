#include <cstdio>

int main() {
	int t;
	int count[3] = {0,0,0};
	scanf("%d", &t);
	// 300, 60, 10
	while(t>0) {
		if(t>=300) {
			t-=300;
			count[0]++;
		}
		else if(t>=60) {
			t-= 60;
			count[1]++;
		}
		else if(t>=10){
			t-=10;
			count[2]++;
		}
		else {
			printf("-1");
			return 0;
		}
	}
	
	for(int i=0;i<2;i++) {
		printf("%d ", count[i]);
	}
	
	printf("%d", count[2]);
	
	return 0;
}
