//ASIDILLO, YVES J.
//201430067
//CPEPROG2L




#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

//Problem #01
double problem1(){
	
	double num,result;
	cout<<"Enter number to be round off: ";
	cin>>num;
	result = round(num);
	cout<<"Round off Value: "<<result<<endl;
	
}


//Problem #02
void problem2(){
	
	int min=1 , max =20;
	cout << "Random numbers Program" <<endl;
	cout << "Your 10 random numbers are: ";
	srand((unsigned)time( NULL ));
	for (int i=0; i<10; i++)
	cout << min +(rand()%(max - min + 1)) << " ";
	cout << endl;
	}
	



//Problem #03
int problem3(){
	int choice, side, length, width, base, height, radius, area;
	
	cout<<"*********************"<<endl
		<<"MENU"<<endl
		<<"*********************"<<endl
		<<"[1] - Area of Square"<<endl
		<<"[2] - Area of Rectangle"<<endl
		<<"[3] - Area of Triangle"<<endl
		<<"[4] - Area of Circle"<<endl
		<<"[5] - Exit"<<endl
		<<"---------------------"<<endl
		<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice){	
		case 1:{
			cout<<"---------------------"<<endl
				<<"AREA OF SQUARE"<<endl
				<<"---------------------"<<endl
				<<"Enter the side of the square: ";
			cin>>side;
			area = (side*side);
			cout<<endl<<endl<<"The area is "<<area<<" sq. units";
		};
		break;
		case 2:{
			cout<<"---------------------"<<endl
				<<"AREA OF RECTANGLE"<<endl
				<<"---------------------"<<endl
				<<"Enter the length and width of the rectangle: ";
			cin>>length>>width;
			area = (length*width);
			cout<<endl<<endl<<"The area is "<<area<<" sq. units";
		};
		break;
		case 3:{
			cout<<"---------------------"<<endl
				<<"AREA OF TRIANGLE"<<endl
				<<"---------------------"<<endl
				<<"Enter the base and width of the height: ";
			cin>>base>>height;
			area = (0.5*base*height);
			cout<<endl<<endl<<"The area is "<<area<<" sq. units";
		};
		break;
		case 4:{
			cout<<"---------------------"<<endl
				<<"AREA OF CIRCLE"<<endl
				<<"---------------------"<<endl
				<<"Enter the radius: ";
			cin>>radius;
			area = (radius*radius)*3.14;
			cout<<endl<<endl<<"The area is "<<area<<" sq. units";
		};
		break;
		case 5:
		cout<<"Thank you!";
		break;
		default:	
		cout<<"Invalid Input!";
		break;
	}
	return 0;
}

//Problem #03-B Call by Value
int call_by_value(){
	int num, ans;

	cout << "Enter a positive integer to find factorial value: ";
	cin >> num;
	ans = num;

	if (num == 0)
		ans = 1;
	for(int i = 1 ; i < num ; i++){
		ans = ans * i;
	}
	
	cout << "\n The factorial value of " << num << " is " << ans
		 << endl << endl;

	
}

//Problem #04-C Function Max
int max (int x, int y){
		if (x >y)
		{
			return x;
		}
		else
			return y;		
}

void greatest(){
	int x, y, greatest;
	cout<<"Enter a number: ";
    cin >> x;
    cout<<"Enter a nuumber: ";
    cin>> y;
    greatest = max(x,y);
    cout<<"The Greatest number is: "<<greatest;
}
main(){
	
	problem1();
	cout<<endl<<endl;
	problem2();
	cout<<endl<<endl;
	problem3();
	cout<<endl<<endl;
	call_by_value();
	cout<<endl<<endl;
	greatest();
}
