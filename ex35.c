#include<stdio.h>
#include<conio.h>
typedef char* f();
f* a[2][2];	//o matrice de pointeri spre functii
char* s;
char* f1() { return "functia1"; }  char* f2() { return "functia2"; }
char* f3() { return "functia3"; }  char* f4() { return "functia4"; }
int main() {
	  a[0][0] = f1;	a[0][1] = f2;	a[1][0] = f3;	a[1][1] = f4;
	for (unsigned char i = 0; i < 2; i++) for (unsigned char j = 0; j < 2; j++) { s = a[i][j](); printf("\n %s", s); } getch();
}
