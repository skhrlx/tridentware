#include "utils.hpp"

std::string utils::GenerateStr(const int len)
{
    std::string str;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZÇ"
        "abcdefghijklmnopqrstuvwxyzç";

    srand((unsigned)time(NULL) * _getpid());

    for (int i = 0; i < len; ++i)
    {
        str += alphanum[rand() % (sizeof(alphanum) - 1)];
    }


    return str;
}