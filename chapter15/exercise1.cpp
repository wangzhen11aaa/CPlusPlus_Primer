//
// Created by wangzhen on 05/03/2017.
//

#include <iostream>
#include "tv.h"

int main(void)
{
    Tv s42;
    cout << "Initial settings for 42\" TV: \n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << "\nAdjusted setting for 42\" TV: \n";
    s42.settings();

    Remote grey;
    grey.volup(s42);
    grey.volup(s42);

    cout << "\n42\" settings for using remote :\n";
    s42.settings();

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58, 28);
    cout << "\n58\" settings: \n";
    s58.settings();

    cout << "\nUse Tv to control the remote action mode \n";
    s58.action_mode(grey);
    s42.action_mode(grey);

    return 0;
}
