#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona {
	private:
		string nombres;
		string apellidos;
		int anioNacimiento;
	public:
		Persona(string nombres, string apellidos, int anioNacimiento);
		string nombreCompleto();
		int edad();
		
};

Persona::Persona(string nombres, string apellidos, int anioNacimiento){
	this->nombres=nombres;
	this->apellidos=apellidos;
	this->anioNacimiento=anioNacimiento;
	
}
string Persona::nombreCompleto(){
	string nombreCompleto=this->nombres + " " + this->apellidos;
	return nombreCompleto;
}

Persona::edad(){
	time_t now =time(0);
	tm* ltm=localtime(&now);
	
	int anioActual = 1900+ ltm->tm_year;
	int edad= (anioActual - this->anioNacimiento);
	return edad;
}

int main(){
	string nombres;
	string apellidos;
	int anioNacimiento;
	
	cout <<"por favor ingrese sus nombres";
	getline(cin, nombres);
	
	cout <<"por favor ingrese sus apellidos";
	getline(cin, apellidos);
	
	cout <<"por favor ingrese su anio de nacimiento";
	cin >> anioNacimiento;
	
	Persona persona1(nombres, apellidos, anioNacimiento);
	cout << "--------------datos de la persona-----------------"<< endl;
	cout << "nombre:" << persona1.nombreCompleto() << endl;
	cout << "edad: " << persona1.edad() << endl;
	
	return 0;
}