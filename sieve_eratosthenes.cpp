#include <iostream>

int main(){
	const int RANGE = 100;

	int array[RANGE];
	for (int i = 0; i < RANGE + 1; i++)
		array[i] = i;

	for (int p = 2; p < RANGE + 1; p++){
		if (array[p] != 0){
			std::cout << array[p] << std::endl;
			for (int j = p*p; j < RANGE + 1; j+=p)
				array[j] = 0;
		}
	}
}