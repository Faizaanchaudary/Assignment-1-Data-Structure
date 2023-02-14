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
	
	bool flag;
	int num;
	cout<<"\nPlease Enter The Number To Check Is It Present In The Above Array Or Not:"<<endl;
	cin>>num;
	
	for(int i=0; i<5; i++){
	if(num==faizan[i])
		flag++;
	}
    if (flag==1)
    	cout<<"Number Is Present In The Given Array "<<endl;

	else 
		cout<<"Sorry Not Found"<<endl;


	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}