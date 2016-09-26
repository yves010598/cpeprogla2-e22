//ASIDILLO, YVES J
//201430067
//CPEPROG2LA

#include<iostream>
#include<math.h>

using namespace std;

int main (){	

	for( int a = 1; a <= 100; a++ )

	if (a % 3==0 && a % 5==0){
		cout<<"FizzBuzz!"<<endl;
	}
	else if (a % 3==0){
		cout<<"Fizz!"<<endl;
	}
	else if (a % 5==0){
		cout<<"Buzz!"<<endl;
	}
	else {
		cout<<a<<endl;
	}
		
}

	
