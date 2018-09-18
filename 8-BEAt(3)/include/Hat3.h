#ifndef HAT3_H
#define HAT3_H
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Hat3
{
    public:
        Hat3();
        virtual ~Hat3();
         void setHat();
        bool is8length(string);
        bool is1or0(string);
        string hatline;
        void printhLine();

    protected:

    private:
};

#endif // HAT3_H
