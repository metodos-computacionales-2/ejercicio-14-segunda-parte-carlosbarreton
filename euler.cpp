#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

// variable constantes globales
const double K = 100;
const double M = 2;
const double LAMBDA = 1;
const double DeltaT = 0.01;

// prototipo de funciones
void euler(float t_init, float t_end, float delta_t, float omega, string archivo);
float dzdt(float t, float y, float z, float omega);
float dydt(float t, float y, float z, float omega);

int main(void) {

	float omega = sqrt(K/M);
	float t_inicial=0.0; 
	float t_final=10.0; 
	float delta_t=0.01;
	euler(t_inicial, t_final, delta_t, omega, "euler.dat");

	return 0;
}

void euler(float t_inicial, float t_final, float delta_t, float omega, string archivo){
  float t=t_inicial;
  float y=1.0;
  float z=0.0;
  float y_anterior = 0.0, z_anterior=0.0;
  ofstream outfile;
  outfile.open(archivo);
  while(t<t_final){    
    z_anterior = z;
    y_anterior = y;
    cout << t << " " << y << " " << z << endl;
    outfile << t << " " << y << " " << z << endl;
    z  = z_anterior + delta_t * dzdt(t, y_anterior, z_anterior, omega);
    y = y_anterior + delta_t * dydt(t, y_anterior, z_anterior, omega);
    t = t + delta_t;
  }
  outfile.close();
}

float dzdt(float t, float y, float z, float omega){
  return -omega * omega * y;
}

float dydt(float t, float y, float z, float omega){
  return z;
}