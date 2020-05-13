#include<iostream> // @BetikSonu
#include<time.h>
#include<cstdlib>
using namespace std;
int main()
{
	
	
	
	int a[10];
	srand(time(0));
	
	for(int i=0;i<10;i++)
		a[i] = rand()%100;
		
		
	for(int j=0;j<10;j++)
	{
		for(int i=0;i<10;i++)
		{
			if(a[j]>a[i])
			{
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	cout<<""<<endl;
	
	
	
	return 0;
}
