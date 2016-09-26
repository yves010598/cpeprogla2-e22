//ASIDILLO, YVES J.
//201430067
//CPEPROGL2

#include<iostream>
#include<cstring>
#include<iomanip>
#pragma GCC diagnostic ignored "-Wwrite-strings"
using namespace std;

struct Name{
       char fullName[30];
       char name[20];
};

struct Student{
       int id;
       Name name;
       double quiz[3];
	   char *remark;
	   double grade1;
	   double grade2;
	   double grade3;
	   double average;
	      
};

struct Customer{
	struct Name{
		char firstName[20];
		char lastName[20];
	}name;
	
	struct Order{
		int day;
		int month;
		int year;
		int quan;
		struct Item{
			int ID;
			char itemName[20];
			int Price;
		};
	Item item[3];
	}order;
	
	double contNo;
};
	
	
	

void newLine(){
	char s;
	do{cin.get(s);}while(s!='\n');
}

//Problem #01
int problem1(){
    Student stud;
    double sum;
    cout << "Enter student records: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "Name: ";
    cin.getline(stud.name.fullName, 29);
   
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.quiz[i]; 
			sum += stud.quiz[i]/3;       
    }
    if(sum>=75){
		cout << "\n\n";
    	cout << "Display student records\n";
    	cout << "ID: " << stud.id << endl;
    	cout << "Name: " << stud.name.fullName << endl;
    	cout << "Grades: "<<sum<<endl;
    	cout << "Remarks :Passed"<<endl;    
    }
	
	else{
		 cout << "\n\n";
    cout << "Display student records\n";
    cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.fullName << endl;
    cout << "Grades: "<<sum<<endl;
    cout << "Remarks: Failed"<<endl;
    }
    
    
    system("pause > 0");
    return 0;   
}

//problem 2

int problem2(){
	
	
	int x;
	Student stud[4];
	
	
	cout<<"Enter 5 Student(s)"<<endl<<endl;
	
	for(x=0;x<5;x++){
		
	cout<<"Student "<<x+1<<endl;
	cout<<	"ID: ";
	cin>>stud[x].id;
	cin.clear();
	cin.ignore();
	cout<<"Name: ";
	cin.getline(stud[x].name.name,20);
	
	cout<<endl<<"Enter 3 quizzes: ";
	cin>>stud[x].grade1>>stud[x].grade2>>stud[x].grade3;
	cout<<endl<<endl;
	
	stud[x].average = (stud[x].grade1+stud[x].grade2+stud[x].grade3)/3;
	
	
	if(stud[x].average>=75)
	{
		stud[x].remark= "Passed";
	
	}	
	
	else
	
		stud[x].remark= "Failed";
	}
	
	cout<<setw(5)<<"No."<<setw(15)<<"Student No"<<setw(20)<<"Name"<<setw(10)<<"Grade"<<setw(15)<<"Remark"<<endl;
	
	for(x=0;x<5;x++){
		
		cout<<setprecision(2)<<fixed;
		cout<<setw(5)<<x+1<<setw(15)<<stud[x].id<<setw(20)<<stud[x].name.name
		<<setw(10)<<stud[x].average<<setw(15)<<stud[x].remark<<endl;		
	}
}

//Problem #03
int problem3(){
	int i, j, tPrice;
	Customer c[3];
	for (i=0;i<3;i++){
		cout<<"CUSTOMER INFORMATION "<<i+1<<endl;
		cout<<"First Name: ";
		cin.getline(c[i].name.firstName,29);
		cout<<"Last Name: ";
		cin.getline(c[i].name.lastName,29);
		cout<<"ORDER DATE: "<<endl;
		cout<<"Day: ";
		cin>>c[i].order.day;
		cout<<"Month: ";
		cin>>c[i].order.month;
		cout<<"Year: ";
		cin>>c[i].order.year;
		cout<<"\nENTER 3 ITEMS: "<<endl;
		for (j=0;j<3;j++){
		    cout<<"ID: ";
		    cin>>c[i].order.item[j].ID;
		    newLine();
    	    cout<<"Name: ";
    		cin.getline(c[i].order.item[j].itemName,29);
    		cout<<"Price: ";
    		cin>>c[i].order.item[j].Price;
    		cout<<"Quantity: ";
    		cin>>c[i].order.quan;
    		cout<<endl;
		}
		newLine();
}
	j=0;
	cout<<"SUMMARY REPORT"<<endl;
	cout<<" #"<<setw(30)<<"Customer Name"
	<<setw(20)<<"Order Date"
	<<setw(15)<<"Items"
	<<setw(15)<<"Price"
	<<setw(15)<<"Quantity"<<endl;
	
	for (i=0;i<3;i++){
		tPrice=0;
		cout<<" "<<i+1
		<<setw(23)<<c[i].name.lastName<<","
		<<setw(6)<<c[i].name.firstName
		<<setw(11)<<c[i].order.day<<"/"<<c[i].order.month<<"/"<<c[i].order.year<<endl;
		
    	for (j=0;j<3;j++){
    		cout<<setw(67)<<c[i].order.item[j].itemName
			<<setw(15)<<c[i].order.item[j].Price
			<<setw(15)<<c[i].order.quan<<endl;
    		tPrice += c[i].order.item[j].Price;
		}
		tPrice=tPrice*c[i].order.quan;
		cout<<setw(96)<<"TOTAL PRICE: "<<tPrice<<endl;
	}
	
	return 0;
	
}

main (){
	
	problem1();
	cout<<endl<<endl;
	problem2();
	cout<<endl<<endl;
	problem3();
	cout<<endl<<endl;
	
}
