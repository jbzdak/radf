#define BOOST_TEST_MODULE "C++ Unittests for radf"
#define BOOST_TEST_CATCH_SYSTEM_ERRORS yes
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_NO_MAIN

#include <boost/test/unit_test.hpp>
#include <boost/test/framework.hpp>
#include <boost/filesystem.hpp>

//#include "test_src"

int main( int argc , char** argv) {
  return ::boost::unit_test::unit_test_main( &init_unit_test, argc, argv );
}

