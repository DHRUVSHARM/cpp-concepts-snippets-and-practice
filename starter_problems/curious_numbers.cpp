// Don't change the code in Test method
void Test( ) 
{
	cout << "List of curious numbers: ";
	for ( int i = 1 ; i <= 10000 ; i++ ) 
	{
		bool curious = isCurious ( i ) ;
		if ( curious == true ) 
			cout << i << " " ;
	}
}

int factorial ( int num ) 
{
	int p ; // garbage value
		
	// Your code goes here
	p = 1;
	
	if (num < 0){
	  // invalid edge case 
	  return -1;
	}
	
	while (num){
	  p *= num;
	  num -= 1;
	}
	
	return p ;
}

bool isCurious ( int num ) 
{
	// Your code goes here
	// 1234
	int digitsum = 0 , currnum = num;
	while (currnum){
	  int digit = currnum % 10;
	  digitsum += factorial(digit);
	  currnum /= 10;
	}
	
	if (digitsum == num){
	  return true;
	}
	else{
	  return false;
	}
}
