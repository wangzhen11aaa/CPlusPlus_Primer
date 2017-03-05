//
// Created by wangzhen on 05/03/2017.
//

#include <iostream>
#include "emp.h"

using namespace std;
int main(void)
{
   employee em("Trip", "Harris", "THumper");
   cout << em << endl;
   em.ShowAll();

   manager ma("Amorphia", "Spindragon", "Nuancer", 5);
   cout << ma << endl;
   ma.ShowAll();

   fink fi("Matt", "Oggs", "Oiler", "Juno Bar");
   cout << fi << endl;
   fi.ShowAll();

   highfink hf(ma, "Curly Kew");
   hf.ShowAll();

   cout << "Press a key for next phase :\n";
   cin.get();
   highfink hf2;
   hf2.SetAll();

   cout << "Using a  abstr_emp *pointer \n";
   abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
   for (int i = 0; i < 4; i++)
      tri[i]->ShowAll();

   return 0;

}