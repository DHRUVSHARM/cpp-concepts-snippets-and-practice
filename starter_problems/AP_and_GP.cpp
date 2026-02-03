#include <cmath>
bool isAP ( int* arr , int size ) 
{
	bool ap;
	
	// Your code goes here
	if (size < 2){
	    return true;
	}
	
	int diff = arr[1] - arr[0];
	ap = true;
	
	for (int i = 1; i < size ; i++){
	    if (diff != (arr[i] - arr[i - 1])){
	        ap = false;
	        break;
	    }
	}
	
	return ap;
}

bool isGP ( int* arr, int size ) 
{
	bool gp;
	
	// Your code goes here
	if (size < 2){
	    if (arr[0] != 0){
	        return true;
	    }
	    else{
	        // 0 cannot be an element of a GP
	        return false;
	    }
	}
	
	// check if any element is 0
	float epsilon = 1e-6 , ratio = (float) arr[1] / arr[0];
	gp = true;
	for (int i = 1 ; i < size ; i++){
	    if (arr[i] == 0){
	        gp = false;
	        break;
	    }
	    float current_ratio = (float) arr[i] / arr[i - 1];
	    if ( ! (std :: abs(current_ratio - ratio) <= epsilon) ){
	        gp = false;
	        break;
	    }
	}
	
	
	return gp;
}
