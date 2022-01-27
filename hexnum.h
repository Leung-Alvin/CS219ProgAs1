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
//Default Constructor for a Hex Number
	HexNum() = default;
//Constructor for a Hex Number if given a hexadecimal number in string form (ex: "0x132").
	HexNum(string nhexVal);
//Constructor for a Hex Number if given a decimal integer and want the minimum number of hexadecimal digits.
	HexNum(uint32_t i);
//Constructor for a Hex Number if given a decimal integer and the length or number of hexadecimal digits in the hexadecimal number.
	HexNum(uint32_t i, int length);

private:
	string hexVal;
	uint32_t intVal;
	int len;
	string hexName;

public:
/**
    Returns the hexadecimal value of this Hex Number
    @return a string representing the hexadecimal value of this Hex Number
*/ 
	string getHex() const;
/**
    Returns the decimal number of this Hex Number
    @return an intger representing the decimal number of this Hex Number.
*/
	uint32_t getInt() const;
/**
    Assigns a new hexadecimal value for this Hex Number (Work in Progress and not needed for this assignment)
    @param h a string representing the new hexadecimal value for this Hex Number
*/

	void setHex(string h);
/**
    Assigns a new decimal number for this Hex Number (Work in Progress and not needed for this assignment)
    @param i a 32 bit unsigned integer representing the new decimal number to be assigned.
*/

	void setInt(uint32_t i);
/* 
    Returns the hexadecimal number of this Hex Number
    @return a string representing the hexadecimal nnumber of this Hex Number. Hexadecimal number and hexadecimal value are different
	in that the hexadecimal number has a 0x as a header. (1231 vs 0x1231)
*/
	string getHexName() const;

/*
    Returns a Hexadecimal Number from the result of combining two hexadecimal numbers
*/

	HexNum operator+ (const HexNum& rhs) const;

};

#endif
