#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++) {
		
		char arr[80]={0};
		char cnt[80]={0};
		int count = 0;
		cin>>arr;
		int len = strlen(arr);
		int score = 0;
		
		
		for(int j=0;j<len;j++) {
			if(arr[j]=='O') {
				count+=1;
			}
			else {
				count = 0;
			}
			cnt[j] = count;
			score += cnt[j];
		}
		
		cout<<score<<endl;
		
	}
	
	
	return 0;
}
