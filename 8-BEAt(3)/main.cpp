#include <iostream>
#include "Bass3.h"
#include "Hat3.h"
#include "Snare3.h"
#include "SoundBar3.h"
using namespace std;

int main()
{
       ifstream file;
    file.open("logo.txt");
    string line;
    while(getline(file, line))
    {
        cout << line << endl;
    }
    cout << endl;
    cout << "Welcome to 8-BEAt!" << endl;
    cout <<  "Instructions:" << endl;
    cout << "8-BEAt will ask you to enter 4 String." << endl;
    cout << "Each string must be 8 character." << endl;
    cout << "Each character must be a 0 or 1" << endl;
    cout << "A 1 will play a sound on that beat." << endl;
    cout << "A 0 will play no sound on that beat." << endl;

    Bass3 boom;
    Hat3 clap;
    Snare3 tap;
    SoundBar3 play;
    string start = "";
      while(start != "start")
    {
         cout << "Enter \"start\" to begin." << endl;
         cin >> start;




          if(start == "start")
        {
         boom.setBass();
         clap.setHat();
         tap.setSnare();
        }

    }

    boom.printbLine();
    clap.printhLine();
    tap.printsLine();
    cout << endl;
    play.playBeat();


    return 0;
}
