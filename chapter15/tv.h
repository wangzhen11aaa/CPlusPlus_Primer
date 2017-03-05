//
// Created by wangzhen on 05/03/2017.
//

#ifndef CPP_BOOK_TV_H
#define CPP_BOOK_TV_H

#include <iostream>

using std::cout;
class Remote;

class Tv
{
public:
    friend class Remote; // Remote can access Tv Private parts
    enum {Off, On};;
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};

    Tv(int s = Off, int mc = 125): state(s), volume(5), channel(2), maxchannel(mc), mode(Cable), input(TV) {}
    void onoff() {state = (state == On) ? Off : On;}
    bool ison() const {return state == On;}
    bool volup();
    bool voldown();
    bool chanup();
    bool chandown();
    void set_mode() {mode = (mode == Antenna) ? Cable : Antenna;}
    void set_input() {input = (input == TV)?DVD : TV;}
    void settings() const; // display all settings
    void action_mode(Remote &rt);
private:
    int state; // on or off
    int volume; // assumed to be digitized
    int channel; // current channel setting
    int maxchannel; // max number of channels
    int mode; // broadcast or cable
    int input; // TV or DVD

};

class Remote
{
private:
    int mode; // controls TV or DVD
    int _action_mode; // normal mode or interactive mode
public:
    friend class Tv;
    enum {Normal, Interactive};
    Remote(int m = Tv::TV, int a_mode = Normal ):mode(m), _action_mode(a_mode) {}
    int  set_action_mode() {return _action_mode = (_action_mode == Normal)? Interactive: Normal;}
    bool volup(Tv &t) {return t.volup();}
    bool voldown(Tv &t) {return t.voldown();}
    void onoff(Tv &t) {t.onoff();}
    bool chanup(Tv &t) { return t.chanup();}
    bool chandown(Tv &t){return t.chandown();}
    void set_chan(Tv &t, int c) { t.channel = c;}
    void set_input(Tv &t) {t.set_input();}

};


#endif //CPP_BOOK_TV_H
