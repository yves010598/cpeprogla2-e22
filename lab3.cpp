//ASIDILLO, YVES J.
//201430067
//CPEPROG2L

#include<iostream>
#include<cstring>
using namespace std;

char* myStrCmp( char* srt1, char* srt2){
	
switch (strcmp (srt1, srt2)){
	case -1:
		cout << "Negative";
		break;
	case 0:
		cout << "Equal";
		break;
	case 1:
		cout << "Positive";
		break;
	}
}

//Problem #01
int problem1(){
	
	cout << "******************" << endl;
	cout << "STRING COMPARE" << endl;
	cout << "******************" << endl;
	
	char str1[100], str2[100];
	cout << "Enter a first word(str1): ";
	cin >> str1;
	
	cout << "Enter a second word(str2): ";
	cin >> str2;
	
	myStrCmp(str1, str2);

}

//Problem #02
int problem2(){
	
	cout << "******************" << endl;
	cout << "STRING COPY" << endl;
	cout << "******************" << endl;
	
	char str1[100], str2[100];
	cout << "Enter a first word(str1): ";
	cin.ignore();
	cin.getline(str1,100);
	cout << "Enter a second word(str2): ";
	cin.getline(str2,100);
	
	strcpy (str1, str2);
	cout << "New string value for str1: " << str1;
	
}


//Problem #03
int problem3(){

	cout << "******************" << endl;
	cout << "STRING CONCATINATION" << endl;
	cout << "******************" << endl;
	
	char str1[100], str2[100];
	
	cout << "Enter a first word(str1): ";
	cin.getline(str1,100);
	
	cout << "Enter a second word(str2): ";
	cin.getline(str2,100);
	
	strcat(str1,str2);
	cout<<str1;
}

//Problem #04
int problem4(){

	cout << "******************" << endl;
	cout << "PALINDROME" << endl;
	cout << "******************" << endl;
	
	char str[100];
	int i, length;
	int palindrome = 0;
	
	
	cout << "Enter a word: ";
	cin.getline(str, 100);
	
	length = strlen(str);
	
	for (i=0; i<length; i++){
		if(str[i] != str[length-i-1]){
			palindrome = 1;
		}
	}
	
	if (palindrome ){
		cout << str << " is not a palindrome" << endl;
	}
	else {
		cout << str << " is a palindrome" << endl;
	}
}

//Problem 5
int problem5(){

char str[30];
	int i;
	
	cout<<"Enter some string: ";
	cin.getline(str, 30);
	cout<<endl;
	
	
	str[0]= toupper(str[0]);
	
	for(i=1;i<strlen(str);i++){
		
		
		if(isspace(str[i])){
			
			i++;			
			str[i]=toupper(str[i]);			
			
		}		
			
		else		
		
		str[i]=tolower(str[i]);			
				
	}
		
	cout<<str[0];
	
	for(i=1;i<strlen(str);i++){
		
		cout<<str[i];
				
	}
	
}
//Problem #06
int problem6(){
	   int i;
   char str[100];
   cout<<"************************"<<endl
		<<"Problem 6"<<endl
		<<"************************"<<endl;
   cout<<"Enter a string: ";
   cin.getline(str, 100);
   for(i=0; i<strlen(str); i++){
   	if (isalpha(str[i])){
   		cout<<str[i];
	   }
   	else if (isspace(str[i])){
   		cout<<endl;
   		 
	   }
	else if (isdigit(str[i])){
		cout<<endl;
	}
	
	   else{
	   	;
	   }
   }
}


main(){
	
	problem1();
	cout << endl << endl;
	problem2();
	cout << endl << endl;
	problem3();
	cout << endl << endl;
	problem4();
	cout << endl << endl;
	problem5();
	cout << endl << endl;
	problem6();
	cout << endl << endl;
}
