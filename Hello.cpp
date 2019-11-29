// Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
using namespace std;

template <typename T>
class smart_pointer {
private:
	T* rawPtr;
public:
	smart_pointer(T *pData) :rawPtr(pData) {};
	~smart_pointer() { delete rawPtr };

	smart_pointer(const smart_pointer &anotherP);

	smart_pointer& operator= (const smart_pointer &anotherSP);

	T& operator * () const {
		return rawPtr;
	}

	T* operator-> () const {
		return rawPtr;
	}
};

int main() {
	
	

	return 0;
}