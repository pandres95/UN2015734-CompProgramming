#include <cstdlib>
#include <iostream>

using namespace std;

void promptData(
    int* numberOfSubjects,
    int* creditsSubject1, int* creditsSubject2,
    int* creditsSubject3, int* creditsSubject4,
    int* weeklyClassHours
);

int calculateTotalClassHours(
    int hoursByCredit,
    int creditsSubject1, int creditsSubject2,
    int creditsSubject3, int creditsSubject4
);

int calculateTotalPresentialHours(
    int weeklyClassHours, int numberOfSubjects, int numberOfWeeks
);

int main(){

    int numberOfSubjects
    ,   creditsSubject1
    ,   creditsSubject2
    ,   creditsSubject3
    ,   creditsSubject4

    ,   weeklyClassHours

    ,   totalClassHours
    ,   totalPresentialHours
    ,   totalAutonomousHours;

    promptData(
        &numberOfSubjects,
        &creditsSubject1, &creditsSubject2,
        &creditsSubject3, &creditsSubject4,
        &weeklyClassHours
    );
    totalClassHours = calculateTotalClassHours(
        48, creditsSubject1, creditsSubject2, creditsSubject3, creditsSubject4
    );
    totalPresentialHours = calculateTotalPresentialHours(
        weeklyClassHours, numberOfSubjects, 16
    );
    totalAutonomousHours = totalClassHours - totalPresentialHours;

    cout << endl << "Horas de clase totales: " << totalClassHours << endl;
    cout << "Horas de clase presencial: " << totalPresentialHours << endl;
    cout << "Horas de clase autonomas: " << totalAutonomousHours << endl;

    return 0;
}

void promptData(
    int* numberOfSubjects,
    int* creditsSubject1,
    int* creditsSubject2,
    int* creditsSubject3,
    int* creditsSubject4,
    int* weeklyClassHours
){

    cout << "Por favor ingrese el numero de materias: ";
    cin >> (*numberOfSubjects);

    cout << "Ingrese el numero de creditos para la materia 1: ";
    cin >> (*creditsSubject1);
    cout << "Ingrese el numero de creditos para la materia 2: ";
    cin >> (*creditsSubject2);
    cout << "Ingrese el numero de creditos para la materia 3: ";
    cin >> (*creditsSubject3);
    cout << "Ingrese el numero de creditos para la materia 4: ";
    cin >> (*creditsSubject4);

    cout << "Finalmente, ingrese el numero de horas semanales que tiene clase "
        << "en cada una de sus asignaturas: ";
    cin >> (*weeklyClassHours);

}

int calculateTotalClassHours(
    int hoursByCredit,
    int creditsSubject1, int creditsSubject2,
    int creditsSubject3, int creditsSubject4
) {
    return hoursByCredit * (
        creditsSubject1 + creditsSubject2 + creditsSubject3 + creditsSubject4
    );
}

int calculateTotalPresentialHours(
    int weeklyClassHours, int numberOfSubjects, int numberOfWeeks
) {
    return weeklyClassHours * numberOfSubjects * numberOfWeeks;
}
