#include <cstdio>

int main() {
	int arr[3], temp;
	int i, j;
	scanf("%d%d%d", &arr[0],&arr[1],&arr[2]);
	
	for(i=0;i<2;i++) {
		for(j=i+1;j<3;j++) {
			if(arr[i]>arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("%d %d %d", arr[0], arr[1], arr[2]);
	
	return 0;
} 
