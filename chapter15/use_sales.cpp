//
// Created by wangzhen on 05/03/2017.
//

#include <iostream>
#include "sales.h"
#include <stdexcept>

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;

    double vals1[12] = {1220, 1100, 1122, 2212, 1232, 2334,
                        2884, 2393, 3302, 2922, 3002, 3544};
    double vals2[12] = {12, 11, 22, 21, 32, 34, 28,
                        29, 33, 29, 32, 35};

    Sales sales1(2011, vals1, 12);
    LabeledSales sales2("Blogstar", 2012, vals2, 12);

    LabeledSales::nbad_index *excpt;

    cout << "First try block :\n";
    try
    {
        int i;
        cout << "Year = " << sales1.Year() << endl;
        for (i = 0 ; i < 12; ++i)
        {
            cout << sales1[i] << " ";
            if (i % 6 == 5)
                cout << endl;
        }
        cout << "Year = " << sales2.Year() << endl;
        cout << "Label = " << sales2.Label() << endl;
        for (i = 0; i <= 12; ++i)
        {
            cout << sales2[i] << ' ';
            if (i % 6 == 5)
                cout << endl;
        }
        cout << "End of try Block 1 \n";
    }
    catch(Sales::bad_index & bad)
    {
        cout << bad.what();
        //if (excpt = dynamic_cast<LabeledSales::nbad_index *> (&bad)) // if ref exception = nbax_index
        if (typeid(bad) == typeid(LabeledSales::bad_index)) // if ref exception = nbax_index
            cout << "Compnay : " << excpt->label_val() << endl;
        cout << "bad index : "<< bad.bi_val() << endl;
    }

}