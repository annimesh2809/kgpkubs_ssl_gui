#include <iostream>
#include <bits/stdc++.h>

#include "utils.h"

namespace ssl{
    namespace utils{
        int handle_args_naive(int argv, char* argc[]){
            for(int i=0;i<argv;i++)
                std::cout<<argc[i]<<std::endl;
            return ssl::utils::ErrorFlag::NO_ERROR;
        }
    }
}
