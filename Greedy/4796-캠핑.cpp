#include <cstdio>
using namespace std;

// v%p �������� ���̽� �з��ؾ� �ϴ� �� ����! 

int main() {
	int l,p,v,n,cnt=1;
	
	while(1) {
		scanf("%d%d%d",&l,&p,&v);
		n = 0;
		
		if(l==0 && p==0 && v==0) break;
		// v/p ��ŭ ���� {���,���,~~~,�̻��} �ݺ��� 
		n += v/p * l;
		// v%p >= l�� ��� (���� ���� + l)
		if(v%p >= l) n += l;
		// v%p < l�� ��� (���� ���� + v%p) 
		else n += v%p;
		
		printf("Case %d: %d\n", cnt,n);
		cnt++;
	}
	return 0;
}
