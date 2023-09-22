#include<iostream>
using namespace std;
main()
{
	int finalanswar,number1,number2,number3,number4,number5,number6,number7,number8,number9,number10,number11,number12,number13,number14,number15,sum,product,sub;
	cout<<"Number 1: ";
	cin>>number1;
	cout<<"Number 2: ";
	cin>>number2;
	cout<<"Number 3: ";
	cin>>number3;
	cout<<"Number 4: ";
	cin>>number4;
	cout<<"Number 5: ";
	cin>>number5;
 	sum=number1+number2+number3+number4+number5;
	cout<<"sum of first five numbers: "<<sum;

	cout<<"Number 6: ";
	cin>>number6;
	cout<<"Number 7: ";
	cin>>number7;
	cout<<"Number 8: ";
	cin>>number8;
	cout<<"Number 9: ";
	cin>>number9;
	cout<<"Number 10: ";
	cin>>number10;
	product=number5*number6*number7*number8*number8*number9*number10;
	cout<<"product of numbers: "<<product;

	cout<<"Number 11: ";
	cin>>number11;
	cout<<"Number 12: ";
	cin>>number12;
	cout<<"Number 13: ";
	cin>>number13;
	cout<<"Number 14: ";
	cin>>number14;
	cout<<"Number 15: ";
	cin>>number15;
	sub=number11-number12-number13-number14-number15 ;
	cout<<"sub: "<<sub;
	finalanswar=sum+product-sub;
	cout<<"Final answer: "<<finalanswar;	
        
}