/*
    Program: Foss-App
    Description: i dont really know
    Author: qkrdusth
    Goal: Make a foss app and a website for docs
    2nd Goal: Make an app that's only one file
*/

#include <iostream>
#include <string>

struct Civilization 
{
    std::string mCivName;
    std::string mCivAge; // Ancient, Classical, Medieval, etc.
};

int main() 
{
    Civilization japan;
    japan.mCivName = "Japan";
    japan.mCivAge = "Ancient";

    std::cin.get();
    return 0;
}