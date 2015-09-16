#include <project.h>

using namespace std;

int main(int argc, char** argv) {
	int option = 0;

	do {
		cls();
		header();
		menu();

		cin >> option;

		cls();
		switch(option){
			case 0:
				break;
			case 1:
				trig();
				break;
			default:
				cout
				 	<< endl
					<< "Por favor seleccione una opción correcta"
					<< endl;
		}
	} while(option != 0);

	return 0;
}

void header(){

	cout
		<< endl << "\t\t\tUniversidad Nacional de Colombia"
		<< endl << "\t\t\tSede Bogota"
		<< endl << "\t\t\tFacultad de Ingenieria"
		<< endl << "\t\t\tDepartamento de Ingenieria de Sistemas e Industrial"
		<< endl << "\t\t\tPrograma de Ingenieria de Sistemas y Computacion"
		<< endl << endl
		<< endl << "  2015734 – Programacion de Computadores"
		<< endl << "  Taller de Programacion # 2"
		<< endl << "  16 de Septiembre de 2015"
		<< endl
		<< endl << "  Pablo Andres Dorado Suarez";
}

void menu(){

	cout
		<< endl << endl
		<< endl << "1) Problemas de trigonometria"
		<< endl << "2) Problemas de fisica"
		<< endl << "3) Problemas de quimica"
		<< endl << "4) Problemas de biologia"
		<< endl << "5) Problemas de geometria"
		<< endl << "0) Salir"
		<< endl
		<< endl << "Por favor seleccione una opcion: ";
}

void trig(){
	cout
		<< endl << "Problema 1: Dada una altura y angulo (en grados), halle la "
				<< "longitud de las escaleras"
		<< endl << endl;

	double	height = 0
	,		angle = 0;

	do{
		cout << "Por favor ingrese la altura (en metros): ";
		cin >> height;
	} while(height <= 0);

	do{
		cout << "Por favor ingrese el angulo (en grados): ";
		cin >> angle;
	} while(angle <= 0);

	double length = stairsLength(height, angle);

	cout
		<< endl << "La longitud de la escalera es de " << length << "m"
		<< endl << endl;

	pause();
}
