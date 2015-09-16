#include <project.h>

using namespace std;

void geom(){

    // Problem #1
	{
		cout
			<< endl << "Problema 1: Para un circulo de radio (en centimetros) "
                    << "dado, determine la longitud de arco a un angulo "
                    << "(en grados) dado."
			<< endl << endl;

		double  radius = 0
		,	    angle  = 0;

		do {
			cout << "Por favor ingrese el radio (en centimetros): ";
			cin >> radius;
		} while(radius <= 0);

		do {
			cout << "Por favor ingrese el angulo (en grados): ";
			cin >> angle;
		} while(angle <= 0);

		cout
			<< endl << "La longitud de la arco es de "
                    << arcLength(radius, angle) << "cm."
			<< endl << endl
			<< endl;
	}

    // Problem #2
	{
		cout
			<< endl << "Problema 2: Halle la altura de un triangulo "
                    << "equilatero, si su perimetro es de 27cm."
			<< endl << endl;

		cout
			<< endl << "La altura del triangulo equilatero es de "
                    << equTriangleHeight(27) << "cm."
			<< endl << endl
			<< endl;
	}

    // Problem #3
	{
		cout
			<< endl << "Problema 3: Halle el volument de una piramide "
                    << "triangular."
			<< endl << endl;

        double height = 0
        ,      base   = 0;

        do {
			cout << "Por favor ingrese la altura (en metros): ";
			cin >> height;
		} while(height <= 0);

		do {
			cout << "Por favor ingrese un lado de la base (en metros): ";
			cin >> base;
		} while(base <= 0);

		cout
			<< endl << "La altura de la piramide de triangulo equilatero es de "
                    << trngPyramidVolume(height, base) << "cm."
			<< endl << endl
			<< endl;
	}

}

double arcLength(double radius, double angle){
    return radius * rad(angle);
}

double equTriangleHeight(double perimeter){
    return sqrt(pow(perimeter / 3.0, 2) - pow(perimeter / 6.0, 2));
}

double trngPyramidVolume(double height, double base){
    return height * pow(base, 2) / (4 * sqrt(3));
}
