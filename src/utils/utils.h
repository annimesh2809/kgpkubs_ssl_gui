#ifndef UTILS_H
#define UTILS_H

namespace ssl{
    namespace utils{
        int handle_args_naive(int, char**);
        enum ErrorFlag{
            NO_ERROR = 0
        };
    }
}

#endif // UTILS_H
