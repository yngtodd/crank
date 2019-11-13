#include <iostream>

#include "crank/crank.hpp"
#include "crank/crank_config.hpp"

int main(int argc, char *argv[]){
    std::cout<<"CRANK_VERSION_MAJOR "<<CRANK_VERSION_MAJOR<<"\n";
    std::cout<<"CRANK_VERSION_MINOR "<<CRANK_VERSION_MINOR<<"\n";
    std::cout<<"CRANK_VERSION_PATCH "<<CRANK_VERSION_PATCH<<"\n";
}