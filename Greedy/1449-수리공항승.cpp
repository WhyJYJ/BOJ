#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;

// �� ���� �� ��ġ ���� �� �Ǿ� �ִ� �� ����!
int main() {
	// �� ���� �� 1000���� �ڿ����̹Ƿ� start=0���� ���� 
	int n,l,cnt=0,start=0;
	scanf("%d%d", &n, &l);
	vec.resize(n);
	for(int i=0;i<n;i++) {
		scanf("%d", &vec[i]);
	}
	sort(vec.begin(), vec.end());
	
	
	for(int i=0;i<n;i++) {
		// �� ���� �� vec[i]�� �� ���������� ������ ���̱�
		// start + (l-1)������ �ڵ����� ���� 
		if(start<vec[i]) {
			start = vec[i] + (l-1);
			cnt++;
		}
	}
	
	printf("%d",cnt);
	return 0;
}
