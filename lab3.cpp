#include<iostream>
#include<cstring>
using namespace std;

char* myStrCmp( char* srt1, char* srt2){
	
switch (strcmp (srt1, srt2)){
	case -1:
		cout<<"Negative";
		break;
	case 0:
		cout<<"Equal";
		break;
	case 1:
		cout<<"Positive";
		break;
	}
}

void myStrCpy(char* str1, char* str2){

strcpy(str1, str2);
}

int main(){
	char str1[100]="Hello";
	char str2[100]="hello";
	
	myStrCmp(str1, str2);
	myStrCpy(str1, str2);
	cout << str1;
	
}
