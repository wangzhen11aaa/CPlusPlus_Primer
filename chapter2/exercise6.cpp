#include <iostream>

using namespace std;

double light_year_to_astronomical_units(float light_year)
{
    return 63240 * light_year;

}

int main()
{
    cout << "Enter the number of light years:\n";

    double light_year;
    cin >> light_year;

    double astronomical_units = light_year_to_astronomical_units(light_year);
    cout << light_year << " light year(s) = " << astronomical_units << " astronomical units.\n";
    return 0;

}
