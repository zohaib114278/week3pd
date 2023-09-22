#include<iostream>
using namespace std;
main()
{
  int sizePerPound, bagCost,bagArea,costOfFertilizerPerPound,costOfFertilizerPerSquareFeet;
  cout<<"Enter the size of fertilizer per pound:  ";
  cin>>sizePerPound;
  cout<<"Enter the cost of the bag: ";
  cin>>bagCost;
  cout<<"Enter the area in square feet that can be covered by bag: ";
  cin>>bagArea;
  costOfFertilizerPerPound=bagCost/sizePerPound;
  cout<<"Cost of fertilizer per pound: "<<costOfFertilizerPerPound;
  costOfFertilizerPerSquareFeet=bagCost/bagArea;
  cout<<"Cost of fertilizer per square feet: "<<costOfFertilizerPerSquareFeet;
  
  
  

}