#include <iostream>
using namespace std ;
int main ()
{
	cout<<"                           Pasaraya Seri Cahaya                           "<<endl<<endl;
	cout<<"                              Susu = RM3.30                               "<<endl;
	cout<<"                              Roti = RM2.40                               "<<endl;
	cout<<"                             Telur = RM0.30								 "<<endl;
	
	float ksusu, kroti, ktelur, jum1, jum2, jum3, jum;
	
	cout<<"Masukkan kuantiti susu : ";
	cin>>ksusu;
	jum1=3.30*ksusu;
	cout<<"Harga bagi susu ialah : ";
	cout<<jum1<<endl<<endl;
	
	cout<<"Masukkan kuantiti roti : ";
	cin>>kroti;
	jum2=2.40*kroti;
	cout<<"Harga bagi roti ialah : ";
	cout<<jum2<<endl<<endl;
	
	cout<<"Masukkan kuantiti telur : ";
	cin>>ktelur;
	jum3=0.30*ktelur;
	cout<<"Harga bagi telur ialah : ";
	cout<<jum3<<endl<<endl;
	
	cout<<"Harga keseluruhan yang perlu dibayar ialah : ";
	jum=jum1+jum2+jum3;
	cout<<jum;
	
return 0;
}
