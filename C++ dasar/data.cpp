#include<iostream>
#include<conio.h>
#include<stdio.h>
struct mahasiswa
{
	char nim[10];
	char nama[25];
	float nilai;
};
int main()
{
	int jlh;
	FILE*p;
	struct mahasiswa mhs[10];
	p = fopen("data.txt","w");
	if(p = NULL)
	{
		printf("File tidak dapat dibuka\n");
		getch();
		exit(1);
	}
	printf("Jumlah data: ");scanf("%d",&jlh);
	for(int i=1;i<=jlh;i++)
	{
		printf("NIM : ");scanf("%s",mhs[i].nim);
		printf("Nama : ");scanf("%s",mhs[i].nama);
		printf("Nilai : ");scanf("%f",&mhs[i].nilai);
		printf("\n");
		fprintf(p,"%s %s %f",mhs[i].nim,mhs[i].nama,mhs[i].nilai);
	}
	fclose(p);
}
