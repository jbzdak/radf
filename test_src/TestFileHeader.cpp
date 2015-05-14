//
// Created by jb on 5/14/15.
//

#include <boost/test/unit_test.hpp>
#include <fstream>

#include "TestFileHeader.h"
#include "TemporaryFile.h"
#include "../src/FileHeader.h"

using namespace RADF;
using namespace RADF::Test;

BOOST_AUTO_TEST_SUITE(TestFileHeader)

// TODO check for nonzero version and proper endiannes
BOOST_AUTO_TEST_CASE(TEST_HEADER){
  std::array<uint8_t, 18> expected = {
    113, 230, 109, 4, 250, 110, 17, 228, 151, 23, 108, 136, 20, 175, 233, 80, 0, 0
  };
  TemporaryFile tf(false);
  FileHeader fh;
  std::fstream of;
  std::cout << tf.file_path_as_string << std::endl;
  of.open(tf.file_path_as_string, std::ios::binary|std::ios::in|std::ios::out|std::ios::trunc);
  BOOST_ASSERT_MSG(!of.fail(), "Couldn't open file");
  of << fh;
  std::cout << of.tellp() << std::endl;
  BOOST_CHECK(of.tellp() == 18);
  of.flush();
  of.seekp(0);
  for (auto byte: expected){
    uint8_t current;
    of >> current;
    BOOST_CHECK(current == byte);
  }
  of.close();

}


BOOST_AUTO_TEST_SUITE_END()