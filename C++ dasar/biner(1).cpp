#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
struct mhs_t
{
	char nim[12];
	char nama[25];
	char jurusan[15];
	int nilai;
};
int main()
{
	FILE*p;
	struct mhs_t mhs[10];
	p = fopen("biner(1).txt","wb");
	if(p==NULL)
	{
		printf("File tidak dapat dibuka\n");
		getch();
		exit(1);
	}
	int pilih,jlh,a=0;
	menu:
	system("cls");
	cout<<endl;
	cout<<"Program Menampilkan Data Mahasiswa"<<endl;
	cout<<"==============================="<<endl;
	cout<<"1.Tambah Data"<<endl;
	cout<<"2.Hapus Data"<<endl;
	cout<<"3.Urut Data (berdasarkan nilai)"<<endl;
	cout<<"4.Lihat Daftar"<<endl;
	cout<<"5.Keluar"<<endl;
	cout<<"==============================="<<endl;
	cout<<"Pilihan : ",cin>>pilih;
	if(pilih==1)
	{
		system("cls");
		cout<<"Jumlah data yang ingin diinput : ",cin>>jlh;
		jlh = a + jlh;
		for(int i=a;i<jlh;i++)
		{
			a++;
			printf("Nim : ");scanf("%s",mhs[i].nim);
			printf("Nama : ");scanf("%s",mhs[i].nama);
			printf("Jurusan : ");scanf("%s",mhs[i].jurusan);
			printf("Nilai ujian : ");scanf("%d",&mhs[i].nilai);
			cout<<endl;
		}
		fwrite(&mhs,sizeof(struct mhs_t),jlh,p);
		goto menu;
	}
	
	if(pilih==2)
	{
		system("cls");
		string name;
		cout<<"Nama : ",cin>>name;
		for(int i=0;i<jlh;i++)
		{
			if(mhs[i].nama==name)
			{
				mhs[i]= mhs[i+1];
				for(int j=i+1;j<jlh;j++)
				{
					mhs[j]= mhs[j+1];
				}
				jlh--;
				a--;
				cout<<"Data siswa dengan nama "<<name<<" telah dihapus.";
			}
		}
		getch();
		goto menu;
	}
	
	if(pilih==3)
	{
		urut:
		system("cls");
		char plh;
		cout<<"Urut dari nilai: "<<endl;
		printf("1. Tinggi ke rendah \n");
		printf("2. Rendah ke tinggi \n");
		printf("Pilihan : ");scanf("%c",plh);
		getch();
		system("cls");
		if(plh='1')
		{
			for(int i=0;i<a;i++)
			{
				for(int j=i+1;j<a;j++)
				{
					if(mhs[i].nilai<mhs[j].nilai)
					{
				 		mhs[a] = mhs[j];
						mhs[j] = mhs[i];
						mhs[i]= mhs[a];
					}
				}
			}
			cout<<"Data siswa telah terurut dari nilai tertinggi hingga terendah"<<endl;
			getch();
			goto menu;
		}
		else if(plh='2')
		{
			for(int i=0;i<a;i++)
			{
				for(int j=i+1;j<a;j++)
				{
					if(mhs[i].nilai>mhs[j].nilai)
					{
				 		mhs[a] = mhs[j];
						mhs[j] = mhs[i];
						mhs[i]= mhs[a];
					}
				}
			}
			cout<<"Data siswa telah terurut dari nilai terendah hingga tertinggi"<<endl;
			getch();
			goto menu;
		}
		else
		{
			cout<<"Pilihan tidak tersedia"<<endl;
			getch();
			goto urut;
		}
	}

	if(pilih==4)
	{
		system("cls");
		cout<<setprecision(2);
		cout<<setiosflags(ios::left);
		
		cout<<setw(12)<<"NIM";
		cout<<setw(25)<<"NAMA";
		cout<<setw(15)<<"JURUSAN";
		cout<<setw(10)<<"NILAI"<<endl;
		cout<<"----------------------------------------------------------------------------"<<endl;
		
		for(int i=0;i<jlh;i++)
		{
			cout<<setw(12)<<mhs[i].nim;
			cout<<setw(25)<<mhs[i].nama;
			cout<<setw(15)<<mhs[i].jurusan;
			cout<<setw(10)<<mhs[i].nilai<<endl;
		}
		getch();
		goto menu;
	}
	if(pilih==5)
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
	fclose(p);
}
