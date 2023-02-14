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
	
	
	int num;
	cout<<"\nEnter Number To Count How Many Times it Appears in Array :"<<endl;
	cin>>num;
	int count=0;
	for(int i=0; i<5; i++)
	if(num==faizan[i]){
		count++;
	}
	cout<<num<<" Appears "<<count<<" Times In The Given Array "<<endl;

	


	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}