
#include "PreProc.h"
#include <ostream>
#include "istream"
#include <fstream>

std::string PreProcess(std::string file)
{
    std::ifstream ifs(file, std::ifstream::in);
    std::string lineInfo;
    std::string command ;
    int a = 0;
    while (ifs) {
        
        getline(ifs,lineInfo);
        for (auto i = lineInfo.cbegin(); i!= lineInfo.cend(); i++) {
            if (*i == ' ') {
                
                
            } else if (*i =='#') {
                command += *i;
                
            } else {
                // No preprocessor command on this line.
            }
            a++;
        }
        
    }
    
    return "preprocess/" + file;
}