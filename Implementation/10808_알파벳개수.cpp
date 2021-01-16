#include <cstdio>

int main() {
	int arr[26], cnt=0, i;
	char input[101];
	scanf("%s", input);
	
	// init
	for(i=0;i<26;i++) {
		arr[i] = 0;
	}
	
	while(input[cnt]!='\0') {
		arr[input[cnt]-97] += 1;
		cnt++;
	}
	
	for(i=0;i<25;i++) {
		printf("%d ", arr[i]);
	}
	printf("%d", arr[i]);
	
	return 0;
}
