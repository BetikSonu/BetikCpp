#include<iostream>  // @BetikSonu

using namespace std;

int main()
{
	int x;
	cout<<"Yasinizi Girin: ";
	cin>>x;
	
	if(x == 21)
	{
		cout<<"\nYüksel Senden Büyük :) "<<endl;
		goto yuksel;
	}
	
	yuksel:
		cout<<"Ne iþin var burada :=) ";
	
}
