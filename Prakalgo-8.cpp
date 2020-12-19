#include<iostream>
using namespace std;
const float phi = 3.14;
float jari;float tinggi;
float luas_ling();
float kel_ling();
float vol_tab();
int main(){
	int a;
	char pilih;
	do{
	cout<<"Hitung Lingkaran =====" <<endl;
	cout<<"1.Luas Lingkaran" <<endl;
	cout<<"2.Keliling Lingkaran" <<endl;
	cout<<"3.Volume Tabung" <<endl;
	cout<<"Pilih : ";
	cin>>a;
	switch(a)
	{
		case 1:
		cout<<"Jari-Jari = ";
		cin>>jari;
		cout<<"Luas Lingkaran Adalah =  "<<luas_ling()<<endl;
		break;
		
		case 2:
		cout<<"Jari-Jari = ";cin>>jari;
		cout<<"Keliling Lingkaran Adalah = "<<kel_ling()<<endl;
		break;
		
		case 3:
		cout<<"Jari-Jari = ";cin>>jari;
		cout<<"Tinggi = ";cin>>tinggi;
		cout<<"Volume Tabung Adalah = "<<vol_tab()<<endl;
		break;
		
		default:
		cout<<"Pilihan Tidak Tersedia"<<endl;
	}
	cout<<"Ulangi Program ? (y/n) = ";
	cin>>pilih;
	cout<<endl;
	}while(pilih == 'y');
}
float luas_ling(){
	float luas = phi*jari*jari;	
	return luas;
}
float kel_ling(){
	float keliling = 2*phi*jari;
	return keliling;
}
float vol_tab(){
	float volume = phi*jari*jari*tinggi;
	return volume;
}
