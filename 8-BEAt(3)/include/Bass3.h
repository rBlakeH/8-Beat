#ifndef BASS3_H
#define BASS3_H
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class Bass3
{
    public:
        Bass3();
        virtual ~Bass3();
        void setBass();
        bool is8length(string);
        bool is1or0(string);
        string bassline;
        void printbLine();

    protected:

    private:
};

#endif // BASS3_H
