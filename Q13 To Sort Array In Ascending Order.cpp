#include<iostream>
using namespace std;


int main(){
	char x;
	do{
	int i,j,temp;
	int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	

    
    for(i=0; i<5; i++){
    for(j=i+1; j<5; j++){
	if(faizan[j] < faizan[i])
	{
	temp = faizan[i];
    faizan[i] = faizan[j];
    faizan[j] = temp;
     }
    }
    }


    cout<<"\nElements of Array in Ascending Order:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<faizan[i]<<endl;
    }
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}