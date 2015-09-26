#include <iostream>
#include <daneel/daneel.hpp>
#include "MyRequestHandler.cpp"

int main(int argc, char** argv)
{
    daneel::Daneel<MyRequestHandler>::start(argc, argv);

    return EXIT_SUCCESS;
}
