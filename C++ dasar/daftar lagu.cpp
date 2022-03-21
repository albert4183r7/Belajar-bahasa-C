#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void urut(string lagu[],int i,int j,int k)
{
	if(lagu[i][k]>lagu[j][k])
	{
		string temp = lagu[i];
		lagu[i] = lagu[j];
		lagu[j] = temp;
	}
}
int main()
{
	int plh,jlh,a=0;
	string lagu[20];
	menu:
		system("cls");
	cout<<"==================="<<endl;
	cout<<"Program Daftar Lagu"<<endl;
	cout<<"==================="<<endl;
	cout<<"1.Tambah Lagu"<<endl;
	cout<<"2.Hapus Lagu"<<endl;
	cout<<"3.Urut Lagu"<<endl;
	cout<<"4.Lihat Daftar Lagu"<<endl;
	cout<<"5.Keluar"<<endl;
	cout<<"==================="<<endl;
	cout<<"Pilihan : ",cin>>plh;

	if(plh==1)
	{
		system("cls");
		int j=1;
		cout<<"(INGAT selalu diawali dengan huruf kapital !)"<<endl;
		cout<<"Jumlah Lagu yang ingin ditambah : ",cin>>jlh;
		jlh = a + jlh;
		cout<<"Judul lagu :"<<endl;
		for(int i=a;i<jlh;i++)
		{
			a++;
			cout<<j<<".",cin>>lagu[i];
			j++;
		}
		cout<<endl;
		cout<<"Lagu telah ditambahkan ke daftar"<<endl;
		cout<<endl;
		cout<<"Silahkan tekan ENTER untuk kembali ke beranda";
		getch();
		goto menu;
	}
	if(plh==2)
	{
		int hps;
		system("cls");
		cout<<"No.Lagu yang ingin dihapus : ",cin>>hps;
		cout<<endl;
		for(int i=0;i<jlh;i++)
		{
			if(hps==i+1)
			{
				cout<<"Lagu "<<"<< "<<lagu[i]<<" >>"<<" telah dihapus"<<endl;
				lagu[i]=lagu[i+1];
				for(int j=hps;j<jlh;j++)
				{
					lagu[j]=lagu[j+1];
				}
				jlh--;
				a--;
			}
		}
		if(hps>jlh)
		{
			cout<<"Lagu tidak terdaftar";
		}
		cout<<endl;
		cout<<"Silahkan tekan ENTER untuk kembali ke beranda";
		getch();
		goto menu;
	}
	if(plh==3)
	{
		int k=0;
		system("cls");
		for(int i=0;i<jlh-1;i++)
		{
			for(int j=i+1;j<jlh;j++)
			{
				urut(lagu,i,j,k);
				while(lagu[i][k]==lagu[j][k])
				{
					k++;
					urut(lagu,i,j,k);
				}
				k=0;
			}	
		}
		cout<<"Lagu sudah diurut"<<endl;
		cout<<endl;
		cout<<"Silahkan tekan ENTER untuk kembali ke beranda";
		getch();
		goto menu;
	}
	if(plh==4)
	{
		system("cls");
		cout<<setiosflags(ios::left);
		cout<<"===================="<<endl;
		cout<<"    "<<"DAFTAR LAGU"<<endl;
		cout<<"===================="<<endl;
		cout<<setw(5)<<"NO";
		cout<<setw(25)<<"JUDUL LAGU"<<endl;
		cout<<"===================="<<endl;
		
		for(int i=0;i<jlh;i++)
		{
			cout<<setw(5)<<i+1;
			cout<<setw(25)<<lagu[i]<<endl;
		}
		cout<<"===================="<<endl;
		cout<<endl;
		cout<<"Silahkan tekan ENTER untuk kembali ke beranda";
		getch();
		goto menu;
	}
	if(plh==5)
	{
		system("cls");
		string keluar;
		for(int i=0;i<10;i++)
		{
			cout<<endl;
		}
		cout<<"                  "<<"Apakah anda yakin mau keluar (ya/tidak) ? ",cin>>keluar;
		if(keluar=="ya")
		{
			system("cls");
			exit;
		}
		else
		{
			goto menu;
		}
	}
}
