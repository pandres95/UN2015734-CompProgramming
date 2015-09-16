#include <project.h>

using namespace std;

void phys(){

    // Problem #1
	{
		cout
			<< endl << "Problema 1: Calcule la velocidad dadas la distancia "
                    << "(en metros), y el tiempo (en segundos)"
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

}

double speed(double distance, double time){
    return distance / time;
}

double earthDiameter(){
    double  lightSpeed      = 3 * pow(10, 8); // m/s
    ,       roundFrequency  = 7.5; // s^-1
    return lightSpeed * roundFrequency;
}
