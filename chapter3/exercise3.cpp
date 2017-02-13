#include <iostream>

int main(void)
{
    using namespace std;
    const float kminute_to_second_coefficient = 60.0;
    const float kdegree_to_minute_coefficient = 60.0;

    cout << "Enter a latitude in degrees, minutes and seconds:\n";
    int num_dg;
    cout << "First, enter the degrees: ";
    cin >> num_dg;

    int num_min;
    cout << "Next, enter the minutes of arc: ";
    cin >> num_min;

    int num_sec;
    cout << "Finally, enter the seconds of arc: ";
    cin >> num_sec;

    float degrees = num_dg + num_min / kdegree_to_minute_coefficient + num_sec / kminute_to_second_coefficient / kdegree_to_minute_coefficient;
    cout << num_dg << " degrees, " <<  num_min << " minutes, " << num_sec << " seconds = " << degrees << " degrees" endl;

    return 0;
}