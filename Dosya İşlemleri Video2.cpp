#include<iostream> // @BetikSonu
#include<fstream>
#include<iomanip>
using namespace std;


class Ogrenci
{
public:
    string ad;
    string soyad;
    string numara;
    int Sinif;

    void BilgileriGir();
    void BilgiYazdir();
};
void Ogrenci::BilgileriGir()
{
    cout<<"Ad: ";
    cin>>ad;
    cout<<"\nSoyad: ";
    cin>>soyad;
    cout<<"\nNumara: ";
    cin>>numara;
    cout<<"\nSınıf: ";
    cin>>Sinif;
}
void Ogrenci::BilgiYazdir()
{
    cout<<setw(20)<<"Ad: "<<ad<<endl;
    
    cout<<setw(20)<<"Soyad: "<<soyad<<endl;
    
    cout<<setw(20)<<"Numara: "<<numara<<endl;
    
    cout<<setw(20)<<"Sınıf: "<<Sinif<<endl;
    
}
class Okul
{
    public:
    Ogrenci Ogrenciler[100];
    int ogrenciSayisi;
    fstream dosya3;
    Okul()
    {
        ogrenciSayisi = 0;
        dosya3.open("Ogrenci İsleri.txt",ios::out|ios::in|ios::app);
        dosya3.setf(ios::left);
    }
    void OgrenciEkle()
    {
        Ogrenciler[ogrenciSayisi].BilgileriGir();

        Ogrenci O = Ogrenciler[ogrenciSayisi];

        dosya3<<setw(20)<<O.ad<<setw(20)<<O.soyad<<setw(20)<<O.numara<<setw(20)<<O.Sinif<<endl;

    }
    void OgrenciBul(string numara)
    {
        Ogrenci A;
        while(dosya3.eof() != true)
        {
            dosya3>>A.ad;
            dosya3>>A.soyad;
            dosya3>>A.numara;
            dosya3>>A.Sinif;

            if(A.numara == numara)
            {
                A.BilgiYazdir();
            }
        }
    }
};
int main()
{
    Okul okul1;
    /*okul1.OgrenciEkle();
    okul1.OgrenciEkle();
    okul1.OgrenciEkle(); */
    okul1.OgrenciBul("1545");


    return 0;
}
