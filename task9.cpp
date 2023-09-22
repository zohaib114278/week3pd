#include<iostream>
using namespace std;
main()
{
	int number,sum=0,remainder;
	cout<<"Enter a 4-digit number:";
 cin>>number;
 remainder=number%10;
 sum=sum+remainder;
 number=number/10;

  remainder=number%10;
 sum=sum+remainder;
 number=number/10;
 remainder=number%10;
 sum=sum+remainder;
 number=number/10;
  remainder=number%10;
 sum=sum+remainder;
 number=number/10;
cout<<"Sum= "<<sum; 
}