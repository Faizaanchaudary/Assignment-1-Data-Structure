#include<iostream>
using namespace std;


int main(){
	char x;
	do{
	int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	
	int max=faizan[0];
	for(int i=0; i<5; i++){
	if (max<faizan[i]){
		max=faizan[i];
	}
	}
	
	
	cout<<"\nThe Maximum Number in the Array is : "<<max<<endl;
	cout<<"Press y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}