/**
    CS219 This is the header file for the HexNum class, which represents Hexadecimal Numbers.
    @file hexnum.cpp
    @author Alvin Leung
    @version 1.0 1/21/2022
*/
#ifndef HEXNUM_H
#define HEXNUM_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//This is the HexNum class, which represents Hexadecimal Numbers

class HexNum{
public:
	HexNum() = default;
	HexNum(string nhexVal);
	HexNum(uint64_t i);

private:
	string hexVal;
	uint64_t intVal;
	int len;
	string hexName;

public: 
	string getHex() const;
	uint64_t getInt() const;
	void setHex(string h);
	void setInt(uint64_t i); 
	string getHexName() const;

};

#endif
