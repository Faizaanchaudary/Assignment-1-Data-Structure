#include<iostream>
using namespace std;


int main()
{
	
	char x;
	do{
    int faizan1[100], faizan2[100], faizanMerge[100];
	int size1, size2, i, k;
	
    cout<<"Please Enter the Size of First Array: "<<endl;;
    cin>>size1;
    cout<<"Enter "<<size1<<" Elements for First Array: "<<endl;
    for(i=0; i<size1; i++)
    {
    cin>>faizan1[i];
    faizanMerge[i] = faizan1[i];
    }
    
	
	k = i;
    
    
    cout<<"\n Please Enter the Size Of Second Array: "<<endl;
    cin>>size2;
    cout<<"Enter "<<size2<<" Elements for Second Array: "<<endl;
    for(i=0; i<size2; i++)
    {
	cin>>faizan2[i];
    faizanMerge[k] = faizan2[i];
    k++;
    }
    
    
    
    cout<<"\nThe Merged Array Is :"<<endl;
    for(i=0; i<k; i++)
    cout<<faizanMerge[i]<<" ";
    cout<<endl;
    
    
    
	cout<<"\nPress y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>x;
	}while(x=='y');
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	
    return 0;
}