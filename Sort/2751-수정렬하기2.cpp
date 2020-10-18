#include <cstdio>
#include <algorithm>
using namespace std;


int main()
{
    int N;
    scanf("%d", &N);
    int *arr = new int[N](); 

    for (int j = 0; j < N; j++)
    {
        scanf("%d", &arr[j]);
    }
    
    sort(arr, arr+N);
	
	for (int j = 0; j < N; j++)
    {
        printf("%d\n", arr[j]);
    }
	
	delete[] arr;
    return 0;
}
