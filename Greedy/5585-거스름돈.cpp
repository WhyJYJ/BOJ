#include <cstdio>
using namespace std;

int main() {
	int result=0, price;
	scanf("%d",&price);
	price = 1000 - price;
	
	// 500엔 개수  
	result += price / 500;
	price %= 500;
	// 100엔 개수  
	result += price / 100;
	price %= 100;
	// 50엔 개수  
	result += price / 50;
	price %= 50;
	// 10엔 개수  
	result += price / 10;
	price %= 10;
	// 5엔 개수  
	result += price / 5;
	price %= 5;
	// 1엔 개수  
	result += price / 1;
	
	printf("%d",result); 
	return 0;
}
