#include <iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main()
{
    cout <<"Celsius\tFahrenheit\t | \tFahrenheit\tCelsius "<<endl;
    double celsi[] = { 40.0, 39.0, 31.0 };
    double fahre[] = { 120.0, 110.0, 30.0 };

    for (int i = 0; i < 3; i++) {
        double cels = celsi[i];
        double fahr = fahre[i];

        double fah = celsius_to_fah(cels);
        double cel = fahrenheit_to_cels(fahr);

        cout << fixed<<setprecision(1)<<cels << "\t" << fah << "\t\t |\t" << fahr<< "\t        " << fixed << setprecision(2) << cel << std::endl;
    }

    return 0;
}