#pragma once
#include<string>
#include<iostream>

using namespace std;

class IStorage
{
public:
	void virtual HDD()=0;//HDD
	void virtual SDD()=0;//SDD
	void virtual DVD()=0;//DVD
	void virtual CD()=0;//CD
	void virtual Floppy()=0;//Floppy
	void virtual Flach()=0;//Flach
	void virtual MD()=0;//MD
private:
};