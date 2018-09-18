#include "SoundBar3.h"
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;
SoundBar3::SoundBar3()
{
    //ctor
}

SoundBar3::~SoundBar3()
{
    //dtor
}

void SoundBar3::playBeat()
{
    ifstream myfile;
    myfile.open("BassLine.txt");
    if(myfile.is_open())
    {
        myfile >> bass;
    }
    myfile.close();
    //cout << bass;

    ifstream datafile;
    datafile.open("HatLine.txt");
    if(datafile.is_open())
    {
        datafile >> hat;
    }
    datafile.close();
   // cout << hat;

    ifstream Snarefile;
    Snarefile.open("SnareLine.txt");
    if(Snarefile.is_open())
    {
        Snarefile >> snare;
    }
    Snarefile.close();


   // cout << bass << endl;
   //cout << hat << endl;
    //cout << snare << endl;

    string stop = "";
    //cout << "enter \"stop\" to end 8-BEAt" << endl;

    while(stop != "stop")
    {



    for(int i = 0; i < 8; i++)
    {   if(bass[i] == '1' && hat[i] == '0' && snare[i] == '0')
            PlaySound(TEXT("808.wav"), NULL, SND_SYNC);
        else if(bass[i] == '0' && hat[i] == '1' && snare[i] == '0')
            PlaySound(TEXT("hat.wav"), NULL, SND_SYNC);
        else if(bass[i] == '0' && hat[i] == '0' && snare[i] == '1')
            PlaySound(TEXT("snare.wav"), NULL, SND_SYNC);
        else if(bass[i] == '1' && hat[i] == '1' && snare[i] == '0')
            PlaySound(TEXT("808&hat.wav"), NULL, SND_SYNC);
        else if(bass[i] == '1' && hat[i] == '0' && snare[i] == '1')
            PlaySound(TEXT("808&snare.wav"), NULL, SND_SYNC);
        else if(bass[i] == '0' && hat[i] == '1' && snare[i] == '1')
            PlaySound(TEXT("hat&snare.wav"), NULL, SND_SYNC);
        else if(bass[i] == '0' && hat[i] == '0' && snare[i] == '0')
            PlaySound(TEXT("noSound.wav"), NULL, SND_SYNC);
    }


    }


}

void SoundBar3::printStrings()
{
     cout << bass << endl;
    cout << hat << endl;
    cout << snare << endl;
}
