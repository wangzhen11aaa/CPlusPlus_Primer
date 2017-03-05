//
// Created by wangzhen on 05/03/2017.
//

#include "tv.h"

// class methods
bool Tv::volup()
{
    if (volume == MaxVal)
        return false;
    else
    {
        ++volume;
        return true;
    }
}

bool Tv::voldown()
{
    if (volume == MinVal)
        return false;
    else
    {
        --volume;
        return true;
    }
}

bool Tv::chanup()
{
    channel = (++channel) % maxchannel;
    return true;
}

bool Tv::chandown()
{
    channel = (--channel) % maxchannel;
    return true;
}

void Tv::settings() const
{
    using std::endl;
    cout << "Tv is " << ((state == Off)? "Off" : "On") << endl;
    if (state == On) {
        cout << "state : " << state << "\t" << "volume : " << volume << "\t\n";
        cout << "channel : " << channel << "\t" << "mode : " << mode << "\t\n";
        cout << "input :" << input << "\t\n";
    }

}

void Tv::action_mode(Remote &rt)
{
    cout << "remote action_mode : " << rt.set_action_mode() << std::endl;
}
