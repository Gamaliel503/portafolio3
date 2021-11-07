#include "cuentabancaria.h"

using namespace std;
int main(){
	//crear una cuenta bancaria
	CuentaBancaria miCuenta("A-480920", "JONATHAN JOESTAR", 2900.00);
	cout << "titular: " <<miCuenta.getNombreTitular() <<endl;
	cout << "#cuenta: " <<miCuenta.getNumeroCuenta() <<endl;
	cout << "Saldo: $" <<miCuenta.getSaldo() <<endl;
	cout << "--------------------------------------" <<endl;


//creando otra cuenta
	CuentaBancaria cuentaAmigo("c-165426", "arele gutierrez", 784661.00);
	cout << "titular: " <<cuentaAmigo.getNombreTitular() <<endl;
	cout << "#cuenta: " << cuentaAmigo.getNumeroCuenta() << endl;
	cout << "Saldo: $" << cuentaAmigo.getSaldo() <<endl;
	cout << "--------------------------------------" <<endl;


//creando otra cuenta
	CuentaBancaria cuentaNoValida("A-354698", "John Cena", 500.00);
	cout << "titular: " <<cuentaNoValida.getNombreTitular() <<endl;
	cout << "#cuenta: " <<cuentaNoValida.getNumeroCuenta() <<endl;
	cout << "Saldo: $" <<cuentaNoValida.getSaldo() <<endl;
	cout << "--------------------------------------" <<endl;
	
	//hacer un retiro de la ceunta mi cuenta
	cout << "Quiero retirar de la cuenta $84 de la cuenta" <<miCuenta.getNumeroCuenta() <<endl;
	cout << "Saldo inicial:  $" <<miCuenta.getSaldo() <<endl;
	miCuenta.retirar(84);
	cout << "Saldo luego de la operacion: $" <<miCuenta.getSaldo() <<endl;
	cout << "--------------------------------------" <<endl;
	
	//hacer ubn retiro de la cuenta mi cuenta mayor al saldo disponible
	cout << "Quiero retirar de la cuenta $84 de la cuenta" <<miCuenta.getNumeroCuenta() <<endl;
	cout << "Saldo inicial:  $" <<miCuenta.getSaldo() <<endl;
	miCuenta.retirar(3500);
	cout << "Saldo luego de la operacion: $" <<miCuenta.getSaldo() <<endl;
	cout << "--------------------------------------" <<endl;
	
	
	//hacer un retiro de un monto negativo
	cout << "Quiero retirar de la cuenta -$725 de la cuenta" <<miCuenta.getNumeroCuenta() <<endl;
	cout << "Saldo inicial:  $" <<miCuenta.getSaldo() <<endl;
	miCuenta.retirar(-725);
	cout << "Saldo luego de la operacion: $" <<miCuenta.getSaldo() <<endl;
	cout << "--------------------------------------" <<endl;
	
	//hacer un deposito de la cuenta miCuenta
	cout << "Quiero depostitar $125000 de la cuenta" <<miCuenta.getNumeroCuenta() <<endl;
	cout << "Saldo inicial:  $" <<miCuenta.getSaldo() <<endl;
	miCuenta.depositar(125000);
	cout << "Saldo luego de la operacion: $" <<miCuenta.getSaldo() <<endl;
	cout << "--------------------------------------" <<endl;
	
		//hacer un retiro de la cuenta miCuenta
	cout << "Quiero depostitar -$5000 de la cuenta" <<miCuenta.getNumeroCuenta() <<endl;
	cout << "Saldo inicial:  $" <<miCuenta.getSaldo() <<endl;
	miCuenta.depositar(-5000);
	cout << "Saldo luego de la operacion: $" <<miCuenta.getSaldo() <<endl;
	cout << "--------------------------------------" <<endl;
	
	return 0;
}
	