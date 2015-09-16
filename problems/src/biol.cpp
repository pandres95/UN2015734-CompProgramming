#include <project.h>

using namespace std;

void biol(){

    // Problem #1
	{
		cout
			<< endl << "Problema 1: Cuantos ºC son 25ºF"
			<< endl << endl;

		cout
			<< endl << "25ºF = " << celsius(25) << "ºC."
			<< endl << endl
			<< endl;
	}

    // Problem #2
	{
		cout
			<< endl << "Problema 2: Si una bacteria hace fusion binaria cada "
                    << "20 minutos, cuanto tiempo tomara para tener 1 millon "
                    << "de especies."
			<< endl << endl;

        double fTime = fuseTime();

        int fuseSecs = ceil((fTime - ((int)fTime)) * 60)
        ,   fuseMins = (int)fTime % 60
        ,   fuseHour = (int)fTime / 60;


		cout
			<< endl << "El tiempo necesario es de " << fuseHour << " horas, "
                    << fuseMins << " minutos y " << fuseSecs << " segundos."
			<< endl << endl
			<< endl;
	}
}

double celsius(double fahrenheit){
    return (fahrenheit - 32) * 5 / 9.0;
}

double fuseTime(){
    return 20 * log2(1000000);
}
