#include <iostream>
#include <mm_malloc.h>
#include <string>
#include <thread>
#include <chrono>
#include <stdio.h>
#include <random>
#include <fstream>
#include <stdlib.h>

using namespace std;

class MachineWriting
{
public:
	int range, offset;
	char *buffer;
	int bufferSize;
	MachineWriting(int a, int b, string text)
	{
		range = a;
		offset = b;
		bufferSize = text.length();
		buffer = (char *)calloc(bufferSize,sizeof(char));
		for(int i = 0; i < bufferSize; i++)
			{
				buffer[i] = text[i];
			}
	}

	int ThreadStart()
	{
		for(int i = 0; i < bufferSize; i++)
			{
				this_thread::sleep_for(chrono::milliseconds(offset + (rand() % range)));
				cout<< buffer[i];
			}
		
		return 0;
	}
};

int main(int argc, char** argv)
{
	fstream textfile;
	textfile.open(argv[1],ios::in);
	if(textfile.is_open())
	{
		string a;
		getline(textfile,a);
		MachineWriting t = MachineWriting(100,101,a);
		thread prikol(&MachineWriting::ThreadStart, &t);
		prikol.join();
		free(t.buffer);
	}
	else
	{
		cout<<"Some Problems With Opening FILE, check your path"<<endl;
		return -1;
	}
	
	
}
