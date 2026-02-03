void printNumberandIndex() 
{
	int num, index;
	// Your code goes here
	int element1 = 1, element2 = 1 , digitcount = 1;
	index = 2;num = 2;
	
	// e1, e2 , e2 + e1
	//  e2 , e2 + e1
	do{
	    // get count of new fibonacci number and keep updating index
	    digitcount = countdigits(element1 + element2);
	    index += 1;
	    
	    int temp = element1;
	    element1 = element2;
	    element2 = temp + element2;
	    num = element2;
	    
	}while(digitcount < 10);
	
	// Don't change this cout statement
	cout << "Index of " << num << " is " << index ;
}

int countdigits ( int num ) 
{
	int count = 0 ;

	// Your code goes here
	// fibonacci number can never be 0 so not handled 
	
    while(num){
        num = num / 10;
        count += 1;
    }

	return count ;
}