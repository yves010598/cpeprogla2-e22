#include<iostream>
#include <fstream>
#include<cmath>

using namespace std;

int main(){

    ifstream f("input.txt");
    int n1;
    int n2;
    int arr[4]={1,2,4,3};   
	int i;
    while (f>> n1>>n2){
    	
	for(i=0; n1<=n2;i++){	
	cout << n1<< " ";
	
		n1=n1+ arr[i%4];
	}

}
}
