void numtender ( int amount, int * numofnotes ) 
{   
    // denomination of each of the notes
	int den[ ] = { 1, 2, 5, 10, 20, 50, 100, 500, 2000 } ;
	// can caLculate the size 
	//std :: cout << "here" << endl;
	int size = sizeof(den) / sizeof(den[0]) ;
	// std :: cout << "size : " << size;
	
	// Your code goes here ...
	// cannot get size of passed array as we did not pass the integer size
    // std :: cout << sizeof(numofnotes) / sizeof(numofnotes[0]) << endl;
    // sanity check for amount
    /*
        a[i]        == *(a + i)      // value
        &a[i]       ==  a + i        // address
        *(a + i)    ==  a[i]         // value again
    */
    
    if (amount <= 0){
        for (int i = 0; i < size ; i++){
            numofnotes[i] = 0;
        }
        
        return;
    }
    
    // we can use the greedy solution 
    for (int i = size - 1; i >= 0; i--){
        int denomination = den[i];
        if (amount >= denomination){
                  // std :: cout << "amount : " << amount << endl;
                    numofnotes[i] = amount / denomination; // truncate to zero by default
                    amount = amount % denomination;
        }
    }
    
    // the unfilled part of the result will be -1 need to set to zero
    for (int i = 0 ; i < size ; i++){
        if (numofnotes[i] == -1){
            numofnotes[i] = 0;
        }
    }
    
    return;
    
	/* You have to populate numofnotes array in your code
	where each value in numofnotes array would correspond 
	to a count of denomination in den array */
}

