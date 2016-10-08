#include<iostream>
#include <fstream>

using namespace std;

int main(){
   int i,sum=0;
	ifstream f("input.txt");
  
    
    int num;
    
    while (f >> num){
    	for (i=3;i<num;i++)
    	if (i%3==0 || i%5==0)
    	sum=sum+i; 
   }
   cout << sum;
    
    system("pause >0");
}   
