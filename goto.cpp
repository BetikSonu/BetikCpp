#include<iostream>  // @BetikSonu

using namespace std;

int main()
{
	int x;
	cout<<"Yasinizi Girin: ";
	cin>>x;
	
	if(x == 21)
	{
		cout<<"\nY�ksel Senden B�y�k :) "<<endl;
		goto yuksel;
	}
	
	yuksel:
		cout<<"Ne i�in var burada :=) ";
	
}
