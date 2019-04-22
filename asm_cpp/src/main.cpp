#include <iostream>
#include <cinttypes>

extern "C" int64_t maxthree(int64_t, int64_t, int64_t);

int main(int argc, char const *argv[])
{
    std::cout << "max: " << maxthree(3,2,5) << std::endl;
    return 0;
}
