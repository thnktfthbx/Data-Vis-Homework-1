/* 
 * File:   main.cpp
 * Author: Karl
 *
 * Created on September 12, 2016, 9:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

/*
 * 
 */
template <typename T>
std::string to_string(T const& value) {
    stringstream sstr;
    sstr << value;
    return sstr.str();
}

int main(int argc, char** argv) {
    string line;
    double val;
    int x, y;
    ifstream inData ("data.txt");
    ofstream outData ("data.json");
    if (inData.is_open())
    {
        x = 0;
        outData << "[\n";
        while (getline (inData, line))
        {
            std::stringstream ss(line);
            y = 0;
            while (ss >> val)
            {
                
                string textNum = to_string(val);
                string xNum = to_string(x);
                string yNum = to_string(y);
                outData<<"     {\"val\": " + textNum + ", \"x\": " + xNum 
                        + ", \"y\": " + yNum;
                if(x==181 && y==217)
                {
                    outData<<" }\n";
                }
                else
                {
                    outData<<" },\n";
                }
                y++;
            }
            x++;
        }
        outData << "]\n";
        inData.close();
        outData.close();
    }
    return 0;
}



