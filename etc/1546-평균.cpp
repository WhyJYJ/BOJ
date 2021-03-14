#include <iostream>
using namespace std;


int main() {
	int n;
	double max = -1, sum = 0;
	cin>>n;
	double * arr = new double[n];
	
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		if(arr[i]>max) max = arr[i];
	}
	
	for(int i=0;i<n;i++) {
		arr[i] = arr[i]/max * 100;
		sum += arr[i];
	}
	
	cout<<(double)sum/n;
	
}
