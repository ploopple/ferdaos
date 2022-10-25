#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    if( argc == 2) {
        ifstream source_code_file(argv[1]);
        if(source_code_file.is_open()) {
            char source_code_char;
            while(source_code_file) {
                source_code_char = source_code_file.get();
                if(source_code_char != ' ' && source_code_char != '\t' && source_code_char != '\n' ) {
                    if(source_code_char >= '0' && source_code_char <= '9') cout << "number" << " ";
                    else if(source_code_char == '+') cout << "addition" << " ";
                    else if(source_code_char == ';') cout << "endstatment" << endl;
                    else cout << "unkown" << endl << source_code_char << endl;
                }
            } 
        }else printf("could not open %s", argv[1]);
    }
    else if(argc == 1) printf("Add a source code file");
    else printf("Too much argument");
}
