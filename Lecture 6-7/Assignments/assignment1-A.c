#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))

int main (){

	/*
	A boolean array that contains true/false values refferring to whether a 
	certain pathway is open/close for transportation.

	Only pathways 0 and 3 are open for transportation. The rest are close.
	*/

	/*we designate the true values to specific places in the array by using
	brackets and the rest of the elements in the array will be considered by the 
	program as false*/

	bool pathway [8] = {[0] = true, [2] = true};

	/*to further shorten the code, we can also use the values 1 and 0
	which also corresponds to boolean values true and false.

	bool pathway [8] = {[0] = 1, [2] = 1};
	*/

	for (int i=0; i<NUM_PATHWAYS; i++){

		/*
		Display the status of each pathway.
		
		Remember that pathway is type bool so its elements are either true/false - 1/0.
		*/

		if (pathway[i]){
			printf("pathway [%d] is open \n", i);
		}

		else{
			printf ("pathawy [%d] is close \n", i);
		}
	}

	return 0;
}