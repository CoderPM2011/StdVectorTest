#include <cstdio>

#define ReplaceStdVector
#include "StdVector.hpp"

int main()
{
    std::vector<int> test;

    int* ptr = test.data();
    printf("addr=%p\n", ptr);
}
