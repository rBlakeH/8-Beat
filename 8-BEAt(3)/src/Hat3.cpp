#include "Hat3.h"
#include <iostream>
#include <string>
using namespace std;
Hat3::Hat3()
{
    //ctor
}

Hat3::~Hat3()
{
    //dtor
}
bool Hat3::is8length(string beat)
{
    if(beat.length() == 8)
        {
           // cout << "8 = true" << endl;
            return true;
        }
       // cout << "8 = false" << endl;
    return false;
}

bool Hat3::is1or0(string beat)
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

 void Hat3::setHat()
{


    cout << "Please enter the hat-line." << endl;
    cin >> hatline;

    bool is8 = is8length(hatline);
    bool is10 = is1or0(hatline);

    if(is8 == true && is10 == true)
    {

        cout << "Hat Set!" << endl;

        ofstream hatfile;
        hatfile.open("HatLine.txt");
        if(hatfile.is_open())
        {
            hatfile << hatline;
        }
        hatfile.close();

    }
    else
    {
     setHat();
    }



}

void Hat3:: printhLine()
{
    cout <<"Hat-line: " << hatline << endl;

}
