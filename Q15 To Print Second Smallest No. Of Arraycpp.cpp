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
	
	int i,j,k;
	for (i = 0; i <5; i++)
    {
    for (j = i+1; j<5; j++)
	{
    if (faizan[i]>faizan[j])
    {
     k = faizan[i];
    faizan[i] = faizan[j];
    faizan[j] = k;
     }
	}
    }
    
    
    cout << "\nSecond Smallest No. in The Array Is  : " <<faizan[1]<<endl;
    
	
	cout<<"Press y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}
