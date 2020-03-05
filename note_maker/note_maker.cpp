#include <iostream>
#include <fstream> 
#include <ctime> 
#include <chrono> 
#include <string> 
#include <bits/stdc++.h>

using namespace std;

int main (int argc, char * argv[])
{
    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);

    auto yr = to_string(local_time->tm_year - 100); //shows 2019 as just 19
    auto month = to_string(local_time->tm_mon + 1); // + 1 is so January is 1 instead of 0
    auto day = to_string(local_time->tm_mday);

    string fileNameDate = month + '_' + day + '_' + yr + ".txt"; //file name will be "MM_DD_YY.txt"

    ofstream myFile (fileNameDate);
    
    int counter = 1;
    unsigned int i; 
    while (myFile.is_open() && argv[counter] != NULL)
    {
        string tempStr = argv[counter];

        //upper horizontal bar
        for (i = 0; i < tempStr.length(); i++)
        {
            myFile << '-';
        }
        myFile << endl; //new line

        myFile << argv[counter] << endl;

        //lower horizontal bar
        for (i = 0; i < tempStr.length(); i++)
        {
            myFile << '-';
        }
        myFile << "\n\n\n" << endl;

        counter++; //move to next command line argument
    }
    myFile.close();

    //location of text editor to open file
    string cmd("/mnt/c/Program\\ Files\\ \\(x86\\)/Notepad++/notepad++.exe ");
    cmd += fileNameDate; //file to open with text editor 

    //bash command open file created with chosen text editor
    system(cmd.c_str());


}
