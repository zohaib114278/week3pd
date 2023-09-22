#include<iostream>
using namespace std;
main()
{
	float vprice,fprice,tv,tf,total;
    cout<<"Enter the  vegetable price per kilogramme (in coins): ";
  cin>>vprice;
  cout<<"Enter the fruit price per kilogramme (in coins): ";
 cin>>fprice;
cout<<"Enter the totak kilogramms of vegetables: ";
 cin>>tv;
cout<<"Enter the total kilgrammes of fruit: ";
cin>>tf;
 total=vprice*tv+fprice*tf;
cout<<"Total earnings: "<<total;
cout<<"Earning in coins: "<<total/1.94;
}
