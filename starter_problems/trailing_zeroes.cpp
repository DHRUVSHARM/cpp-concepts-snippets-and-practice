int countTrailingZeros (int n)
{
	int result = 0; 
	
	// Your code goes here
	if (n < 0){
	    return -1;
	}
	
	// we will try to count 5's in the factorial result 
	int multiplier = 5;
	
	while(multiplier <= n){
	    result += (n / multiplier);
	    multiplier *= 5;
	}
	
	
	return result;
}
