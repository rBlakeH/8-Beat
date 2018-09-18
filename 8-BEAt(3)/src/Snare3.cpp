#include "Snare3.h"

Snare3::Snare3()
{
    //ctor
}

Snare3::~Snare3()
{
    //dtor
}
bool Snare3::is8length(string beat)
{
    if(beat.length() == 8)
        {
           // cout << "8 = true" << endl;
            return true;
        }
       // cout << "8 = false" << endl;
    return false;
}

bool Snare3::is1or0(string beat)
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

 void Snare3::setSnare()
{


    cout << "Please enter the snare-line." << endl;
    cin >> snareline;

    bool is8 = is8length(snareline);
    bool is10 = is1or0(snareline);

    if(is8 == true && is10 == true)
    {

        cout << "Snare Set!" << endl;

        ofstream myfile;
        myfile.open("SnareLine.txt");
        if(myfile.is_open())
        {
            myfile << snareline;
        }
        myfile.close();

    }
    else
    {
     setSnare();
    }



}

void Snare3:: printsLine()
{
    cout << "Snare-line: " << snareline << endl;

}
