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
	cout<<"\nThe Reverse of Array is "<<endl;
	for(int i=5-1; i>=0; i--){
	
cout<<faizan[i]<<" ";
}
	

	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}