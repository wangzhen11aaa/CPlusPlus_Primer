//
// Created by wangzhen on 20/02/2017.
//

#include <iostream>
#include <string.h>

template <typename T>
T maxn(T*, int);

template <> const char* maxn(const char*[], int);

int main() {
    using namespace std;

    int ints[] = {1, 2, 1, 10, 6, 5};
    double doubles[] = {24.75, 1.0, 10.5, 6.1};
    const char* stringPtrs[] = {"One", "TwoTwo", "ThreeThreeThree", "ThreeThreeThree", "FourFour"};

    cout << "Max in ints is " << maxn(ints, 6) << endl;
    cout << "Max in doubles is " << maxn(doubles, 4) << endl;
    cout << "Longest string is " << maxn(stringPtrs, 5) << endl;

    return 0;
}

template <typename T>
T maxn(T* vals, int size) {
    T max = vals[0];

    for (int i = 1; i < size; i++) {
        if (vals[i] > max) {
            max = vals[i];
        }
    }

    return max;
}

template <> const char* maxn(const char* vals[], int size) {
    const char* longest = vals[0];
    int length = strlen(longest);

    for (int i = 1; i < size; i++) {
        int stringLength = strlen(vals[i]);

        if (stringLength > length) {
            longest = vals[i];
            length = stringLength;
        }
    }

    return longest;
}