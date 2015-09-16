#include <project.h>

using namespace std;

void phys(){

    // Problem #1
	{
		cout
			<< endl << "Problema 1: Calcule la velocidad dadas la distancia "
                    << "(en metros), y el tiempo (en segundos)."
			<< endl << endl;

		double	distance = 0
		,		time     = 0;

		do {
			cout << "Por favor ingrese la distancia (en metros): ";
			cin >> distance;
		} while(distance <= 0);

		do {
			cout << "Por favor ingrese el tiempo (en segundos): ";
			cin >> time;
		} while(time <= 0);

		cout
			<< endl << "La velocidad es de " << speed(distance, time) << "m/s."
			<< endl << endl
			<< endl;
	}

    // Problem #2
	{
		cout
			<< endl << "Problema 2: La luz tiene una velocidad de 3*10^8m/s "
                    << "y puede rodear a la tierra 7.5 veces por segundo. "
                    << "Calcule el diametro de la tierra."
			<< endl << endl;

		cout
			<< endl << "El diametro de la tierra es, aproximadamente, de "
                    << earthDiameter() << "km."
			<< endl << endl
			<< endl;
	}

}

double speed(double distance, double time){
    return distance / time;
}

double earthDiameter(){
    double  lightSpeed  = 3 * pow(10, 8) // m/s
    ,       roundTime   = 1 / 7.5; // s
    return km(sqrt(4 * (lightSpeed * roundTime)/ PI));
}

double km(double mi){
    return mi * 1.609344;
}
