#include <cstdio>
using namespace std;

int main() {
	int result=0, price;
	scanf("%d",&price);
	price = 1000 - price;
	
	// 500�� ����  
	result += price / 500;
	price %= 500;
	// 100�� ����  
	result += price / 100;
	price %= 100;
	// 50�� ����  
	result += price / 50;
	price %= 50;
	// 10�� ����  
	result += price / 10;
	price %= 10;
	// 5�� ����  
	result += price / 5;
	price %= 5;
	// 1�� ����  
	result += price / 1;
	
	printf("%d",result); 
	return 0;
}
