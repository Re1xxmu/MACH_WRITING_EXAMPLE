#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <thread>
#include <chrono>
#include <random>
#include <stdio.h>
using namespace std;


FILE *filestream;
string text;
char buffer[4096];
int minum, maxum;

random_device rd;
mt19937 gen(rd());


void  MachineWriting(string text)
{
    for(int i = 0; i <= text.length(); i++)
    {
        uniform_int_distribution<>normal(minum, maxum);
        if(text[i] == *".")
        {
            minum = 350;
            maxum = 450;

        }
        else if(text[i] == *"/")
        {
            break;
        }
        else 
        {
            minum = 90;
            maxum = 190;
        }
        this_thread::sleep_for(chrono::milliseconds(normal(gen)));
        cout<<text[i];
    }
    cout<<endl;
}

int main()
{
    setlocale(LC_ALL,"russian");
    filestream = fopen("text.txt","r");
    fread(buffer,sizeof buffer,1,filestream);
    MachineWriting(text.assign(buffer, buffer + sizeof buffer));
    system("pause");
    
}

