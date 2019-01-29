#include "max_product.h"

int swap(int a, int b, int *arr){
	int temp;
	temp = *(arr+a);
	*(arr+a) = *(arr+ b);
	*(arr+ b) = temp;
}

int max_pairwise_product_fast(int *arr, int size){
	int index = 0;
	for (int i = 1; i < size; i++){
		if (arr[i] > arr[index]){
			index = i;
		}
	}
	swap(index, size - 1, arr);
	index = 0;
	for (int i = 1; i < size-1; i++){
		if (arr[i] > arr[index]){
			index = i;
		}
	}	
	swap(index, size-2, arr);	
	return arr[size-2] * arr[size-1];
}

/*int main(){
	int nums[4] = {7,4,5,6};
	int a = max_pairwise_product_fast(nums, 4);
	printf("%d\n",a);
}*/
/*Used a main function to test my code, I also used the test tool*/

