//
// Created by jb on 5/14/15.
//

#ifndef RADF_RANDOMFILE_H
#define RADF_RANDOMFILE_H

#include <string>

#include <boost/filesystem.hpp>

namespace RADF{ namespace Test{

struct TemporaryFile{
public:
  const bool remove;

  const boost::filesystem::path dir_path;
  const boost::filesystem::path file_path;
  const std::string file_path_as_string;

  TemporaryFile(bool remove=true);
  ~TemporaryFile();
};

}}


#endif //RADF_RANDOMFILE_H
