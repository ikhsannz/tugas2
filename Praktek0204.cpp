#include <iostream>
using namespace std;

int main(){
	double luas(42),p(0.234495),jb(22.3885),lb(1.87596),bp(11194.3),bps,tb(12034.3);
	
	cout<<"Masukkan Luas Rumah(m2)\t:";
	cin >> luas;
	cout<<"Luas Rumah\t\t:"<<luas<<" m2\n";
	lb=1.87596;
	jb=luas/lb;
	cout<<"Luas 1 box parket\t:"<<lb<<" m2\n";
	cout<<"Jumlah box parket\t:"<<jb<<"\n";
	bp=500*jb;
	cout<<"Biaya parket(Rp)\t:"<<bp<<"\n";
	bps=luas*20;
	cout<<"Biaya Pasang(Rp)\t:"<<bps<<"\n";
}
	

