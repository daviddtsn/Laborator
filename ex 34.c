#include<stdio.h>
#include<conio.h>
float y[100];    int f[100], n;   float xmed[3];  float (*functii[3])(float x[100], int f[100], int n);
float med1(float x[100], int f[100], int n) {
	float a = 0, b;
	for (int i = 0; i < n; i++) { f[i] = 1;  a += x[i] * f[i]; }  return a / n;
}
float med2(float x[100], int f[100], int n) {
	float a, b;   a = b = 0;
	for (int i = 0; i < n; i++) { b += f[i];   a += x[i] * f[i]; }     return a / b;
}
float med3(float x[100], int f[100], int n) {
	float a, b;    a = b = 0;
	for (int i = 0; i < n; i++) { b += f[i]; a += f[i] / x[i]; }  return b / a;
}
int main() {
	functii[0] = med1;  functii[1] = med2;  functii[2] = med3;
	printf("\nNr de elemente: "); fflush(stdin);  scanf("%d", &n);
	for (int i = 0; i < n; i++) { printf("\n y[%d]= ", i + 1);  scanf("%f", &y[i]); }
	for (int i = 0; i < 3; i++) { xmed[i] = functii[i](y, f, n);  printf("\n%12.10f", xmed[i]); } getch();
}
