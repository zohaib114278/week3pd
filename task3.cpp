#include<iostream>
using namespace std;
 int main()
{
  float acceleration;
  cout<<"Enter Initial Velocity (m/s): ";
  float initialVelocity;
  cin>>initialVelocity;
  cout<<"Enter Acceleration (m/s*s): ";
  cin>>acceleration;
  cout<<"Enter Time: ";
  int time;
  cin>>time;
  cout<<"Final Velocity: ";
 float finalVelocity;
 finalVelocity=acceleration*time+initialVelocity;
 
cout<<"Final Velocity:  "<<finalVelocity;
 
 
 
  
  
}