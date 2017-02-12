#include <iostream> // A PREPROCESSOR derective
#include <cstring>

int main()  // function header
{
    using std::cout; //make definitions of namespace available
    using std::string;
    using std::endl;
    cout << "Come up and C++ me some time."; // message
    cout << endl;                           //start a new line
    cout << "You won't regret it! " << endl; // more output
    string a = string("a");
    cout << a << endl;
    return 0;       //terminate main()
}
