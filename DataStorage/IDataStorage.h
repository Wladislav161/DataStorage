#pragma once
#include<string>
#include<iostream>

using namespace std;

class IStorage
{
public:
	void virtual Reading()=0;
	void virtual Output()=0;
	void virtual Recording(double fiele)=0;
	void virtual Delection()=0;
	
	
private:
};