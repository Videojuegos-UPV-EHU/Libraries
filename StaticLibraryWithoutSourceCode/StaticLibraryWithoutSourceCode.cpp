// StaticLibraryWithoutSourceCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "../3rd-party/OpenAL/include/alc.h"

#ifndef _WIN64
	#pragma comment(lib,"../3rd-party/OpenAL/lib/Win32/OpenAL32.lib")
#else
	#pragma comment(lib,"../3rd-party/OpenAL/lib/Win64/OpenAL32.lib")
#endif // _WIN32

int main()
{
	ALCdevice *pMyDevice;
	const ALCchar *actualDeviceName;
	// Open the default device 
	pMyDevice = alcOpenDevice(NULL);
		// Pass in valid device pointer to get the name of the open  
		// device 
	actualDeviceName = alcGetString(pMyDevice, ALC_DEVICE_SPECIFIER);

	cout << "Device opened: " << actualDeviceName;

	alcCloseDevice(pMyDevice);

    return 0;
}

