#include<iostream>
using namespace std;
 main()
{
	int nSquareMetres,width,height,nWalls;
	cout<<" number of square metres you can paint ";
	cin>>nSquareMetres;
	cout<<" Width of single wall (in metres) ";
	cin>>width;
	cout<<" Height of single wall (in metres) ";
	cin>>height;
	nWalls=nSquareMetres/(width*height);
	cout<<" number of walls you can paint ";

	
}