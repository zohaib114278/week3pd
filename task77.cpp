#include<iostream>
using namespace std;
main()
{
 
 float adultTP,childTP,nAT,nCT,total,percentage,totalAmount,tCharity,amountccharity,remaining;
  cout<<"Enter the movie name: ";
  string name;
  cin>>name;
  cout<<"Enter the adult ticket price: ";
  cin>>adultTP;
  cout<<"Enter the child ticket price: ";
  cin>>childTP;
  cout<<"Enter the number of tickets sold of adult: ";
  cin>>nAT;
  cout<<"Enter the number of tickets sold of child: ";
  cin>>nCT;
  total=childTP*nCT+adultTP*nAT;
  cout<<"Total Amount: "<<total;
  cout<<"Enter the percemtage: ";
  cin>>percentage;
  tCharity=total * (percentage/100);
  cout<<tCharity<<"amount of charity: ";
  amountccharity=total-tCharity;
  cout<<"amount after charity: "<<amountccharity;
 

  
  

  
  
  
}

