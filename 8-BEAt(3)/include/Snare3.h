#ifndef SNARE3_H
#define SNARE3_H

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class Snare3
{
    public:
        Snare3();
        virtual ~Snare3();
        void setSnare();
        bool is8length(string);
        bool is1or0(string);
        string snareline;
        void printsLine();

    protected:

    private:
};

#endif // SNARE3_H
