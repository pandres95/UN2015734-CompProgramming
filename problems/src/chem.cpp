#include <project.h>

using namespace std;

void chem(){

    // Problem #1
    {

        cout
			<< endl << "Problema 1: Calcule la densidad de una sustancia, dada "
                    << "su masa (en gramos), y su volumen (en cm^3)."
			<< endl << endl;

		double  mass   = 0
        ,       volume = 0;

		do {
			cout << "Por favor ingrese la masa (en gramos): ";
			cin >> mass;
		} while(mass <= 0);

        do {
			cout << "Por favor ingrese el volumen (cm^3): ";
			cin >> volume;
		} while(volume <= 0);

		cout
			<< endl << "La densidad de la sustancia es de "
                    << density(mass, volume) << " gr/cm^3"
			<< endl << endl
			<< endl;

    }

    // Problem #2
    {

        cout
			<< endl << "Problema 2: Calcule la cantidad de moles de un "
                    << "elemento, dado su numero de moleculas y el numero de "
                    << "Avogadro."
			<< endl << endl;

		double  molecules = 0;

		do {
			cout << "Por favor ingrese la cantidad de moleculas: ";
			cin >> molecules;
		} while(molecules <= 0);

		cout
			<< endl << "La cantidad de moles es de " << moles(molecules)
                    << " moles."
			<< endl << endl
			<< endl;

    }

}

double density(double mass, double volume){
    return mass / volume;
}

double moles(double molecules){
    double avogadroNumber = 6.022 * pow(10, 23);
    return molecules / avogadroNumber;
}
