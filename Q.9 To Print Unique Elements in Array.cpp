#include<iostream>
using namespace std;


int main(){
	char x;
	do{
	int faizan[5];
	int i,j;
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"\nThe Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	
	cout << "\n Unique Elements are "<<endl;
	int count;
	for (int i = 0; i < 5; i++)
	{
	count = 0;
	for (int j = 0; j < 5; j++)
	{
	if (i != j)
	{
	if (faizan[i] == faizan[j])
	{
	count++;
	}
	}
	}
	if (count == 0)
	{
	cout << "'"<<faizan[i] << "'       ";
	}
	}
	
	

	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}