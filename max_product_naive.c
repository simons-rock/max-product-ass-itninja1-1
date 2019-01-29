#include "max_product.h"

int max(int num1, int num2){
	if (num1 >= num2) {
		return num1;
	}
	else{
		return num2;
	}
}


int max_pairwise_product_naive(int * arr, int size){
	int product = 0;
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			product = max(product, arr[i] * arr[j]);
			}
		}
	return product;
}


/*int main(){
	int nums[4] = {7,4,5,6};
	int a = max_pairwise_product_naive(nums, 4);
	printf("%d\n",a);
}*/
/*Used a main function to test my code, I also used the test tool*/
