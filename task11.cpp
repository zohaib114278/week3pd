#include<iostream>
using namespace std;
main()
{
	int age,move,lived;
	cout<<"Enter the man's age: ";
	cin>>age;
	cout<<"Enter the number of times they have moved: ";
	cin>>move;
	lived=age/(move+1);
	cout<<"Average number of years lived in the name: "<< lived;
	

}