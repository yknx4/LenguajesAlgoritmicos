#include <iostream>  // I/O 
#include <fstream>   // file I/O
#include <iomanip>   // format manipulation
#include <string>

using namespace std;


string GetStdoutFromCommand(string cmd) {
     
    string data;
    FILE * stream;
    const int max_buffer = 256;
    char buffer[max_buffer];
    cmd.append(" 2>&amp;1");
     
    stream = popen(cmd.c_str(), "r");
    if (stream) {
    while (!feof(stream))
    if (fgets(buffer, max_buffer, stream) != NULL) data.append(buffer);
    pclose(stream);
    }
    return data;
    }
    
    main(){
	string ls = GetStdoutFromCommand("curl http://www.google.com");
 
cout << "LS: " << ls << endl;
 
return 0;
}

