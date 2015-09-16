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
			case 2:
				phys();
				break;
			case 3:
				chem();
				break;
			case 4:
				biol();
				break;
			case 5:
				geom();
				break;
			default:
				cout
				 	<< endl
					<< "Por favor seleccione una opción correcta"
					<< endl;
		}
		pause();
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
