#include <stdio.h>
#include <math.h>

float fungsi( int x, int m)
{
	float y;
	//penghitungan
	y = sqrt( (5*pow(x,3)) - pow(x,m-1) + 12 );
	return y;
}
//cara penggunaan//
int main() {
	int a,b;
	float y = 0;
	printf("Soal 4 UTS ALPROG UMS 2015\n");
	printf("Masukan nilai x : "); scanf("%d", &a);
	printf("Masukan nilai y : "); scanf("%d", &b);
	y = fungsi(a,b);
	printf("x=%d, m=%d, hasilnya y=%f \n",a,b,y);
	return 0;
}
