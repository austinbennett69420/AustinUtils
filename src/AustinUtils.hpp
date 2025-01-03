#ifndef AUSTIN_UTILS_HPP
#define AUSTIN_UTILS_HPP



#include <string>
#define AUSTINUTILS __declspec(dllexport)


extern AUSTINUTILS const std::string AustinUtilsVersion();

//library files
#ifdef AUSTINUTILS
    #include "math.hpp"
    #include "logutils.hpp"
    #include "misc.hpp"
    #include "argparse.hpp"
#endif

#endif