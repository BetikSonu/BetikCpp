#include<iostream> // @BetikSonu
#include<iomanip>
using namespace std;

int main()
{
	int say1=0,say2,say3,say4;
	int notlar[25] = {43,65,71,56,48,23,22,18,95,5,64,77,92,44,35,24,15,6,7,91,66,78,33,100,21};
	
	for(int i=0;i<24;i++)
		{
			
			if(notlar[i]>=0 && notlar[i]<=9)
			{
			
				say1 +=1;
				
			}
			else if(9<notlar[i]<19)
			{
				
				say2 +=1;
			}
			
		}
	cout<<setw(10)<<"1";
	cout<<setw(10)<<"0-9";
	cout<<setw(10)<<say1<<endl;
	
	
	return 0;
}
