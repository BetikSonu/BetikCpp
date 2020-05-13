#include <iostream> // @BetikSonu
#include <ctime>
#include <windows.h>
#include <unistd.h>

 
using namespace std;
 
int main( ) {
   // Systemdeki zaman verilerini alýyoruz.
   time_t now = time(0);
   
 
   char* dt = ctime(&now);
 
   
   tm *gmtm = gmtime(&now); dt = asctime(gmtm); 
   cout << "Suanki UTC Saatiniz :"<< dt << endl; 
   sleep(15);
   char* dt2 = ctime(&now);
   dt2 = asctime(gmtm);
   cout<<dt2-dt<<endl;
}
