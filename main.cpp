#include <iostream>
#include <daneel/daneel.hpp>
#include "helloworld_damsallem_handler.cpp"

int main(int argc, char** argv)
{
    daneel::Daneel<HelloWorldDamsallemHandler>::start(argc, argv);

    return EXIT_SUCCESS;
}
