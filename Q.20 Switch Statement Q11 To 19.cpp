#include<iostream>
using namespace std;


int main(){
	char alp;
	do{
	cout<<"*********************************************"<<endl;
	cout<<"            Welcome To Main Menu             "<<endl;
	cout<<"*********************************************"<<endl;
	cout<<"Question No.11"<<endl;
	cout<<"Question No.12"<<endl;
	cout<<"Question No.13"<<endl;
	cout<<"Question No.14"<<endl;
	cout<<"Question No.15"<<endl;
	cout<<"Question No.16"<<endl;
	cout<<"Question No.17"<<endl;
	cout<<"Question No.18"<<endl;
	cout<<"Question No.19"<<endl;
	cout<<"20.Exit"<<endl;
	
	
	int num;
	cout<<"*********************************************"<<endl;
	cout<<"Please Enter Question No. To Run The Program"<<endl;
	cout<<"*********************************************"<<endl;
	cin>>num;
	
	
	switch(num){
		
		case 11: 
		{
	cout<<"Question No.11 To Separte Even & Odd No. in Separate Arrays"<<endl;
	cout<<endl;
	
	int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"\nThe Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	
	cout<<"\nOdd Numbers From The Above Array :"<<endl;;
	for(int i=0; i<5; i++)
	if(faizan[i]%2!=0)
	cout<<faizan[i]<<" ";
	
	
	cout<<"\nEven Numbers From The Above Array :"<<endl;;
	for(int i=0; i<5; i++)
	if(faizan[i]%2==0)
	cout<<faizan[i]<<" ";
	
	cout<<endl;
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
	}
	
	
	case 12:
		{
	cout<<"Question No.12 To Count Even & Odd No. in  Array"<<endl;
	cout<<endl;
		
		
	int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"\mThe Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	
	
	int counteven=0;
    int countodd=0;
	for(int i=0; i<5; i++)
	if(faizan[i]%2==0){
		counteven++;
	}
	else 
	countodd++;
	
	cout<<"\nTotal Even No. Are :"<<counteven;
	cout<<"\nTotal Odd No. Are :"<<countodd;
		
	cout<<endl;
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
		
	}
	
	
	case 13:
	{
	cout<<"Question No.13 To Sort Array In Ascendimg Order"<<endl;
	cout<<endl;
	
	int i,j,temp;
	int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"\nThe Array You Entered is : "<<endl;
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
	cout<<endl;
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
		
	}
	
	case 14:
	{
	cout<<"Question No.14 To Sort Array In Descendimg Order"<<endl;
	cout<<endl;
		
	int i,j,temp;
	int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"T\nhe Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	
    for(i=0; i<5; i++){
    for(j=i+1; j<5; j++){
	if(faizan[j] > faizan[i])
	{
	temp = faizan[i];
    faizan[i] = faizan[j];
    faizan[j] = temp;
    }
    }
    }
     cout<<"\nElements of Array in Descending Order:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<faizan[i]<<endl;
    }
    
		
	cout<<endl;
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
		break;
	}
	
	
	case 15:
	{
	cout<<"Question No.15 To Find Second Smallest No. In Array"<<endl;
	cout<<endl;
		
	int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"\nThe Array You Entered is : "<<endl;
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
	
	cout<<endl;
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
		break;	
	}
	
	
	case 16:
		{
	cout<<"Question No.16 To Find Second Largest No. In Array"<<endl;
	cout<<endl;
			
	int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"\nThe Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	int i,j,k;
	for (i = 0; i <5; i++)
    {
    for (j = i+1; j<5; j++)
	{
    if (faizan[i]<faizan[j])
    {
     k = faizan[i];
    faizan[i] = faizan[j];
    faizan[j] = k;
    }
	}
    }
    
    cout << "\nSecond Largest No. in The Array Is  : " <<faizan[1]<<endl;
    
	cout<<endl;	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
			
	}
	
	
	case 17:
	{
	cout<<"Question No.17 To Check Two Arrays Are Equal Or Not"<<endl;
	cout<<endl;
	
	int i,j,k,temp,temp2;
	int faizan[5];
	int faizan2[5];
	cout<<"Please Enter Five Numbers in First Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	cout<<"\nThe First Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
    cout<<"\nPlease Enter Five Numbers in Second Array : "<<endl;
	for(int k=0; k<5; k++){
	cin>>faizan2[k];
	}
	
	
	cout<<"\nThe Second Array You Entered is : "<<endl;
	for(int k=0; k<5; k++){
	cout<<faizan2[k]<<" ";
	}
    
   	int count=0;
	for (int i= 0;i<5; i++)
	{
	if (faizan[i] != faizan2[i])
	{
	count++;
	break;
	}
	}
	
	if (count != 0) {
	cout << "\nBoth Arrays Are Not  Same" << endl;
	}
	
	else {
	cout << "\nBoth Arrays Are  Same" << endl;
	}

 
	cout<<endl;
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
	
}
	
	case 18:
	{
	cout<<"Question No.18 To Merge Two Unsorted Arrays Of Different Lengths"<<endl;
	cout<<endl;
	
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
    
    
	cout<<endl;
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
	
    }
    
    
    case 19:
   	{
   	cout<<"Question No.19 To Print Maximum Difference Between Two Elements Of Array"<<endl;
	cout<<endl;
   		
   		
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
    
    int max;
    i=0; j=4;
    max=faizan[j]-faizan[i];
    cout<<"\nMaximum Difference Is :"<<max<<endl;
    cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
    
		}
    
    case 20:
	{
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	exit (0);
	break;
	}
    
	default:
	cout<<"Inavalid Question Number"<<endl;
	
	}
	cout<<"Press y To Again Run the Program OR Press any Key To Exit: "<<endl;
	cin>>alp;
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
		
	}while(alp=='y');
	
		

	return 0;
}