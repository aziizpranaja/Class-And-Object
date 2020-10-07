#include <iostream>
#include <string>

using namespace std;

class Karyawan 
{
	private:
		string NamaDepan;
		string NamaBelakang;
		int GajiBulanan;
	public:
		Karyawan(string, string, int);
		void setNamaDepan(string);
		string getNamaDepan();
		void setNamaBelakang(string);
		string getNamaBelakang();
		void setGajiBulanan(int);
		int getGajibulanan();
};

Karyawan::Karyawan(string depan, string belakang, int gaji)
{
	NamaDepan=depan;
	NamaBelakang=belakang;
	if(gaji>0)
	{
		GajiBulanan=gaji;
	}
	else
	{
		GajiBulanan=0;
	  cout<<"gaji tidak valid"<<endl;
	}
}
void Karyawan::setNamaDepan(string depan)
{
	if (depan.length()<=25)
	{
		NamaDepan=depan;
	}
	if (depan.length()>25)
	{
		NamaDepan=depan.substr(0,25);
	  cout << "Name \"" << depan  << endl;
	}
}
void Karyawan::setNamaBelakang(string belakang)
{
	if(belakang.length()<=25)
	{
		NamaBelakang=belakang;
	}
	if(belakang.length()>25)
	{
		NamaBelakang=belakang.substr(0,25);
		cout << "Name \"" << belakang  << endl;
	}
}
void Karyawan::setGajiBulanan(int gaji)
{
	if (gaji>0)
	{
	  GajiBulanan=gaji;
	}
	else
	{
		GajiBulanan=0;
		cout<<"gaji tidak valid"<<endl;
	}
}
string Karyawan::getNamaDepan()
{
	return NamaDepan;
}
string Karyawan::getNamaBelakang()
{
	return NamaBelakang;
}
int Karyawan::getGajibulanan()
{
	return GajiBulanan;
}

int main()
{
	cout<<"GAJI KARYAWAN"<<endl;
	Karyawan Karyawan1("Aziiz", "Pranaja", 2500000);
	Karyawan Karyawan2("Guhardy", "Haidar", 3500000);
	cout<<"Karyawan 1 : "<<Karyawan1.getNamaDepan()<<" "<<Karyawan1.getNamaBelakang();
	cout<<"Gaji Bulanan : "<<Karyawan1.getGajibulanan()<<endl;
	cout<<"Gaji Tahunan : "<<Karyawan1.getGajibulanan()*12<<endl<<endl;
	
	cout<<"SETELAH KENAIKAN GAJI SEBESAR 10%"<<endl;
	int kenaikangaji1 = Karyawan1.getGajibulanan();
	kenaikangaji1 = kenaikangaji1 + (kenaikangaji1 * 0.1);
	Karyawan1.setGajiBulanan(kenaikangaji1);
	
	cout<<"Gaji Bulanan Karyawan : "<<Karyawan1.getGajibulanan()<<endl;
	cout<<"Gaji Tahunan Karyawan : "<<Karyawan1.getGajibulanan()*12<<endl;
	
	cout<<"Karyawan 2 : "<<Karyawan2.getNamaDepan()<<" "<<Karyawan2.getNamaBelakang();
	cout<<"Gaji Bulanan : "<<Karyawan2.getGajibulanan()<<endl;
	cout<<"Gaji Tahunan : "<<Karyawan2.getGajibulanan()*12<<endl<<endl;
	
	cout<<"SETELAH KENAIKAN GAJI SEBESAR 10%"<<endl;
	int kenaikangaji2 = Karyawan2.getGajibulanan();
	kenaikangaji2 = kenaikangaji2 + (kenaikangaji2 * 0.1);
	Karyawan2.setGajiBulanan(kenaikangaji2);
	
	cout<<"Gaji Bulanan Karyawan : "<<Karyawan2.getGajibulanan()<<endl;
	cout<<"Gaji Tahunan Karyawan : "<<Karyawan2.getGajibulanan()*12<<endl;
}
