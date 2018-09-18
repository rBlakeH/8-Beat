#include "Bass3.h"
#include <iostream>
#include <string>
using namespace std;
Bass3::Bass3()
{
    //ctor
}

Bass3::~Bass3()
{
    //dtor
}
bool Bass3::is8length(string beat)
{
    if(beat.length() == 8)
        {
           // cout << "8 = true" << endl;
            return true;
        }
       // cout << "8 = false" << endl;
    return false;
}

bool Bass3::is1or0(string beat)
{
    int num = 0;

    for(int i = 0; i < 8; i++)
        {
            if(beat[i] == '0' || beat[i] == '1')
            {
                num = num + 1;
            }


        }
        if(num == 8)
        {
           // cout << "is10 = true" << endl;
            return true;
        }
        else
        {
            return false;
           //  cout << "is10 = false" << endl;
        }

}

 void Bass3::setBass()
{


    cout << "Please enter the bass-line." << endl;
    cin >> bassline;

    bool is8 = is8length(bassline);
    bool is10 = is1or0(bassline);

    if(is8 == true && is10 == true)
    {

        cout << "Bass Set!" << endl;

        ofstream datafile;
        datafile.open("BassLine.txt");
        if(datafile.is_open())
        {
            datafile << bassline;
        }
        datafile.close();

    }
    else
    {
     setBass();
    }



}

void Bass3:: printbLine()
{
    cout <<"Bass-line: " << bassline << endl;

}
