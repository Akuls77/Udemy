#include <iostream>
#include <fstream>      //to perform file handling

using namespace std;
int main()
{
    ofstream ofs("My.txt",ios::trunc);      //ofs is obj of class ofstream
    ofs<<"John"<<endl;                      //trunc is used to delete the old data and add the new one
    ofs<<25<<endl;
    ofs<<"cs"<<endl;

    ofs.close();
    return 0;
}