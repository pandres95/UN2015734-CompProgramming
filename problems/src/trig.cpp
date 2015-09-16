#include <project.h>

using namespace std;

double rad(double angle){
    return angle * (PI / 180.0);
}


void trig(){

	// Problem #1
	{
		cout
			<< endl << "Problema 1: Dada una altura y angulo (en grados), halle la "
					<< "longitud (en metros) de las escaleras."
			<< endl << endl;

		double	height = 0
		,		angle  = 0;

		do {
			cout << "Por favor ingrese la altura (en metros): ";
			cin >> height;
		} while(height <= 0);

		do {
			cout << "Por favor ingrese el angulo (en grados): ";
			cin >> angle;
		} while(angle <= 0);

		cout
			<< endl << "La longitud de la escalera es de "
                    << stairsLength(height, angle) << "m."
			<< endl << endl
			<< endl;
	}

	// Problem #2
	{
		cout
			<< endl << "Problema 2: Calcule el area y perimetro de un circulo, "
					<< "dado su radio."
			<< endl << endl;

		double radius = 0;

		do {
			cout << "Por favor ingrese el radio (en centimetros): ";
			cin >> radius;
		} while(radius <= 0);

		cout
			<< endl << "El area del circulo es de "
					<< circleArea(radius) << "cm "
					<< "y el perimetro es de "
					<< circlePerimeter(radius) << "cm."
			<< endl << endl
			<< endl;
	}

	// Problem #3
	{
		cout
			<< endl << "Problema 3: Resuelva el triangulo rectangulo, dados su "
					<< "angulo (en grados) y su hipotenusa (en centimetros)."
			<< endl << endl;

		double	hypotenuse	= 0
		,		angle		= 0;

		do {
			cout << "Por favor ingrese la hipotenusa (en centimetros): ";
			cin >> hypotenuse;
		} while(hypotenuse <= 0);

		do {
			cout << "Por favor ingrese el angulo (en grados): ";
			cin >> angle;
		} while(angle <= 0);

		cout
			<< endl << "El lado opuesto es de "
					<< triangleOpposite(hypotenuse, angle) << "cm, "
					<< "y el lado adyacente es de "
					<< triangleAdjacent(hypotenuse, angle) << "cm."
			<< endl << endl
			<< endl;

	}

	pause();
}


double stairsLength(double height, double angle){
    double distance = height / sin(rad(angle));
    return sqrt(pow(distance, 2) - pow(height, 2));
}

double circleArea(double radius){
    return PI * pow(radius, 2);
}

double circlePerimeter(double radius){
    return 2 * PI * radius;
}

double triangleOpposite(double hypotenuse, double angle){
    return hypotenuse * sin(rad(angle));
}

double triangleAdjacent(double hypotenuse, double angle){
    return hypotenuse * cos(rad(angle));
}
