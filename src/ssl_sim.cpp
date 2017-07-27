#include <QtCore>
#include <iostream>

// ssl headers
#include "utils/utils.h"

int main(int argv, char* argc[]){
        ssl::utils::handle_args_naive(argv,argc);
        std::cout<<qVersion()<<std::endl;
    return 0;
}
