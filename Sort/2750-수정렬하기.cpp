#include <cstdio>
using namespace std;

template <typename Type>
void Insertion_Sort_Without_Swap(Type *_Array, int _n)
{
    // Suppose that first item is already sorted
    for (int i = 1; i < _n; i++)
    {
        // use var temp to not use swap function
        Type temp = _Array[i];
        for (int j = i; j > 0; j--)
        {
            // if array[j-1] > temp => push back array[j-1]
            if (_Array[j - 1] > temp)
            {
                _Array[j] = _Array[j - 1];
            }
            else
            {
                _Array[j] = temp;
                break;
            }
        }
        
        if(_Array[0] > temp) {
        	_Array[0] = temp;
		}
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    int *arr = new int[N](); 

    for (int j = 0; j < N; j++)
    {
        scanf("%d", &arr[j]);
    }
    
    Insertion_Sort_Without_Swap<int>(arr, N);
	
	for (int j = 0; j < N; j++)
    {
        printf("%d\n", arr[j]);
    }
	
	delete[] arr;
    return 0;
}
