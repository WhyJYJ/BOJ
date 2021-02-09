#include <cstdio>
#include <cstring>

#define PLUS 43
#define MINUS 45


int main() {
	char exp[52];
	scanf("%s", exp);

	// variable for calculate
	int num = 0;
	int ans = 0;
	
	// flag for express sign
	int flag = 1;
	
	int len = strlen(exp);
	
	for(int i=0;i<len;i++) {
		if(exp[i]!=PLUS && exp[i]!=MINUS) {
			num *= 10;
			num += (exp[i] - '0');
		}
		else if(exp[i]==PLUS) {
			ans = ans + (flag*num);
			num=0;
		}
		else {
			// case for MINUS
			ans = ans + (flag*num);
			flag = -1;
			num=0;
		}
	}
	
	// for last number
	ans = ans + (flag*num);
	
	printf("%d", ans);
	return 0;
}
