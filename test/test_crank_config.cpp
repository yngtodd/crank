#include <doctest.h>

#include "crank/crank.hpp"
#include "crank/crank_config.hpp"



TEST_SUITE_BEGIN("core");

TEST_CASE("check version"){

    #ifndef CRANK_VERSION_MAJOR
        #error "CRANK_VERSION_MAJOR is undefined"
    #endif
    

    #ifndef CRANK_VERSION_MINOR
        #error "CRANK_VERSION_MINOR is undefined"
    #endif


    #ifndef CRANK_VERSION_PATCH
        #error "CRANK_VERSION_PATCH is undefined"
    #endif

    CHECK_EQ(CRANK_VERSION_MAJOR , 0);
    CHECK_EQ(CRANK_VERSION_MINOR , 1);
    CHECK_EQ(CRANK_VERSION_PATCH , 0);
}



TEST_SUITE_END(); // end of testsuite core
