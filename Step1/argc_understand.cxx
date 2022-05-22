#include <iostream>

#include "TutorialConfig.h"

int main(int argc, char* argv[]){
    
    std::cout << "Value of argc:" << argc << std::endl;

    if (argc < 2) {
    // report version
    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
    }
    // first agrument will be name of program ./Argc in cmd line
    // space will be new arguments
    std::cout << argv[0] << std::endl;

    //for (int i = 0; i < argc; ++i) {
    //    std::cout << argv[i] << std::endl;
    //}
    
    return 0;
}