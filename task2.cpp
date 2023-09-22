#include<iostream>
using namespace std;
 int main()
{
  cout<<"Number of minutes: ";
  int numberOfMinutes;
  cin>>numberOfMinutes;
  cout<<"Frames per second: ";
  int framePerSecond;
  cin>>framePerSecond;
  int second=numberOfMinutes*60;
  int totalFrames;
  totalFrames=second*framePerSecond;
  cout<<"Total number of frames:"<<totalFrames;
 
 
  
  
}