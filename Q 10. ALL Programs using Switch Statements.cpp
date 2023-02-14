
#include<iostream>
using namespace std;


int main(){
	char alp;
	do{
	cout<<"*********************************************"<<endl;
	cout<<"            Welcome To Main Menu             "<<endl;
	cout<<"*********************************************"<<endl;
	cout<<"Question No.1"<<endl;
	cout<<"Question No.2"<<endl;
	cout<<"Question No.3"<<endl;
	cout<<"Question No.4"<<endl;
	cout<<"Question No.5"<<endl;
	cout<<"Question No.6"<<endl;
	cout<<"Question No.7"<<endl;
	cout<<"Question No.8"<<endl;
	cout<<"Question No.9"<<endl;
	cout<<"10.Exit"<<endl;
	
	
	int num;
	cout<<"*********************************************"<<endl;
	cout<<"Please Enter Question No. To Run The Program"<<endl;
	cout<<"*********************************************"<<endl;
	cin>>num;
	
	
	switch(num){
		
		case 1: 
		{
		cout<<"Question No.1 To Print Minimum No. In Array"<<endl;
		cout<<endl;
		
		
	
	int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	
	int min=faizan[0];
	for(int i=0; i<5; i++){
	if (min>faizan[i]){
		min=faizan[i];
	}
	}
	
	cout<<"\nThe Minimum Number in the Array is : "<<min<<endl;
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
     }
	
	case 2: 
	{
	
		cout<<"Question No.2 To Print Maximum No. In Array"<<endl;
		cout<<endl;
		
		
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
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
		
	}
		
		
	case 3:
		{

	cout<<"Question No.3 To check The  No. Is Present Or Not In Array"<<endl;
	cout<<endl;
		
		
		
		
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
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
	
	}
		
	
	
	case 4:
		{

	cout<<"Question No.4 To check how many Times  No. Appears"<<endl;
	cout<<endl;	
	
	
	
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

	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
}
	
	
	case 5:
		{

	cout<<"Question No.5 To Print Odd Numbers"<<endl;
	cout<<endl;
	
	
		int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	
	cout<<"\nOdd Numbers From The Above Array :";
	for(int i=0; i<5; i++)
	if(faizan[i]%2!=0)
	cout<<faizan[i]<<" ";
	cout<<endl;
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
	
	
    }   
	
	case 6:
		{
	cout<<"Question No.5 To Print Even Numbers"<<endl;
	cout<<endl;
	
	
		int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	
	cout<<"\nEven Numbers From The Above Array :";
	for(int i=0; i<5; i++)
	if(faizan[i]%2==0)
	cout<<faizan[i]<<" ";
	cout<<endl;
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
	}
	
	case 7:
	{
	cout<<"Question No.7 To Find Sum od All Array Elements"<<endl;
	cout<<endl;
	
	
	int faizan[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>faizan[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<faizan[i]<<" ";
	}
	
	int sum=0;
	cout<<"\nThe Sum Of Array Elements is : ";
	
	for(int i=0; i<5; i++){
		sum= sum + faizan[i];
	}

	cout<<sum<<endl;
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
	
	}
	
	
	
	case 8:
		
	{
	cout<<"Question No.8 To Reverse an Array"<<endl;
	cout<<endl;
	
	
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
	cout<<endl;
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
	}
	
	case 9:{
	cout<<"Question No.9 To Find Unique Elements in Array"<<endl;
	cout<<endl;
	
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
	
	cout<<endl;
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	break;
	}
	
	
	case 10:
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