//
// Created by jb on 5/14/15.
//

#include "TemporaryFile.h"

namespace RADF{ namespace Test {

const std::string TEMP_PATH = "radf-test";

TemporaryFile::TemporaryFile(bool remove):
  remove(remove),
  dir_path(boost::filesystem::temp_directory_path() / TEMP_PATH.c_str() /
           boost::filesystem::unique_path()),
  file_path(dir_path / boost::filesystem::unique_path()),
  file_path_as_string(file_path.generic_string())
{
  boost::filesystem::create_directories(dir_path);
}

TemporaryFile::~TemporaryFile(){
  if (remove && boost::filesystem::exists(dir_path)){
    boost::filesystem::remove_all(dir_path);
  }
}

}}