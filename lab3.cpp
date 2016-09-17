#include<cstring>


using namespace std;

char* myStrCmp( char* str1, char* str2){
	
switch (strcmp (str1, str2)){
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
	
	char str1[30], str2[30];
	cout << "Enter a first word(str1): ";
	cin >> str1;
	
	cout << "Enter a second word(str2): ";
	cin >> str2;
	
	cout<<endl;
	
	myStrCmp(str1, str2);

}

//Problem #02
int problem2(){
	
	cout << endl << "******************" << endl;
	cout << "STRING COPY" << endl;
	cout << "******************" << endl;
	
	char str1[30], str2[30];
	cout << "Enter a first word(str1): ";
	cin.ignore();
	cin.getline(str1,30);
	cout << "Enter a second word(str2): ";
	cin.getline(str2,30);
	
	strcpy (str1, str2);
	cout << "New string value for str1: " << str1;
	
}


//Problem #03
int problem3(){

	cout << endl << "******************" << endl;
	cout << "STRING CONCATINATION" << endl;
	cout << "******************" << endl;
	
	char str1[30], str2[30];
	
	cout << "Enter a first word(str1): ";
	cin.getline(str1,100);
	
	cout << "Enter a second word(str2): ";
	cin.getline(str2,30);
	
	strcat(str1,str2);
	cout<<str1;
}



//Problem #04

int problem4(){

	cout << "******************" << endl;
	cout << "PALINDROME" << endl;
	cout << "******************" << endl;
	
	char str[30];
	int i, length;
	int palindrome = 0;
	
	
	cout << "Enter a word: ";
	cin.getline(str, 30);
	
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

//Problem #05


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
