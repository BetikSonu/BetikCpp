#include<iostream> // @BetikSonu
#include<cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	int x;
	cout<<"Say� giriniz: ";
	cin>>x;
	cout<<"\nSay�n�z: "<<x<<endl;
	
	cout<<x<<"^2 ="<<pow(x,2)<<endl;
	
	return 0;
}
