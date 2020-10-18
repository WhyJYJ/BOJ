#include <cstdio>
#include <algorithm>
using namespace std;


int main()
{
    int *src_arr = new int[8]; 
    int *dst_arr = new int[8]; 
    int *idx = new int[5];

    for (int j = 0; j < 8; j++)
    {
        scanf("%d", &src_arr[j]);
    }
    
    copy(src_arr, src_arr+8, dst_arr);
    sort(dst_arr, dst_arr+8);
	
	int cut_idx = 8 - 5;
	int cnt=0;
	int sum=0;
	
	
	for (int j = 0; j < 8; j++)
    {
        if(src_arr[j] >= dst_arr[cut_idx]) {
        	idx[cnt] = j+1;
        	cnt++;
		}
    }
    
    for (int j = cut_idx; j < 8; j++)
    {
        sum += dst_arr[j];
    }
    
    printf("%d\n", sum);
    
    for (int j = 0; j < 5; j++)
    {
        printf("%d ", idx[j]);
    }
    
	delete[] src_arr;
	delete[] dst_arr;
	delete[] idx;
    return 0;
}
