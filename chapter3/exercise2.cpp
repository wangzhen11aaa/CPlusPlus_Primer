// Compute BMI according to height in inches, weight in pounds.
#include <iostream>
#include <cmath>

int main(void)
{
    using namespace std;
    const float kfoot_convert_inch_coefficient = 12.0;
    const float kinch_convert_meter_coefficient = 0.0254;
    const float kpound_convert_kilogram_coefficient = 2.2;

    cout << "Input your height in foot (1 meter = 3.28084 inches) , weight in pound (1 kilogram = 2.2 pound) \n";
    float height, weight;
    cin >> height >> weight;
    float bmi_degree = (weight / kpound_convert_kilogram_coefficient) / sqrt(height*kfoot_convert_inch_coefficient*kinch_convert_meter_coefficient);

    cout << "Your BMI is " << bmi_degree << endl;
    return 0;

}