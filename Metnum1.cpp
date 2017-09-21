#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(){
	
	int a,b,tambah,kali,kurang,pangkat;
	int i,temp;
	float bagi,af,bf;
	printf("\t\tTUGAS METNUM AKBAR NUGRAHA\n\n");
	printf("Masukan Nilai A:"); scanf("%d",&a);
	printf("Masukan Nilai B:"); scanf("%d",&b);
	
	
	tambah=a+b;
	kali=a*b;
	kurang=a-b;
	af=a;
	bf=b;
	bagi=af/bf;
	pangkat=pow(a,b);
	
	
	printf("\nPenjumlahan\nHasil dari A + B=%d\n",tambah);
	printf("\nPerkalian\nHasil dari A x B=%d\n",kali);
	printf("\nPengurangan\nHasil dari A - B=%d\n",kurang);
	printf("\nPembagian\nHasil dari A : B=%f\n",bagi);
	printf("\nPangkat\nHasil dari A Pangkat B=%d\n",pangkat);
	printf("\nDeret\nHasil Deret A ke B\n");
	
	for (i=a;i<=b;i++){
	temp=2*pow(i,2)-4*i+1;	
	printf("%d, ",temp);	
	
	}
	

	
	
	getch();
return 0;

}
