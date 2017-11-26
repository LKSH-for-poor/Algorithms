#include <iostream>

void counting_sort(int* vec, unsigned int len, int min, int max) {
	int* cnt = new int[max-min+1];

	for (int i = min; i <= max; ++i)
		cnt[i - min] = 0;
	
	for (int i = 0; i < len; ++i)
		++cnt[vec[i] - min];

	for (int i = min; i <= max; ++i) {
		for(int j = cnt[i - min]; j--;) {
 			*vec++ = i;
		}
	}
	delete [] cnt;
}
int main()
{
	const int len = 5;
	int arr[len] = {4,9,5,3,2};
	counting_sort(arr, len, 2, 9);
	for (int i = 0; i < len; ++i) 
		std::cout << arr[i] << "\n";
}