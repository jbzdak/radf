//
// Created by jb on 5/14/15.
//

#ifndef RADF_FILEHEADER_H
#define RADF_FILEHEADER_H

#include <stdint.h>
#include <iostream>
#include "version.h"

namespace RADF{

class FileHeader {
public:
  friend std::ostream& operator<<(std::ostream& ostr, const FileHeader& header);

  FileHeader():
    FileHeader(magic_bytes, current_version){};
  FileHeader(const uuid_bytes& magic, const uint16_t& file_version):
    magic(magic), file_version(file_version){};

private:

  // TODO: Add block_length field
  uuid_bytes magic;
  uint16_t file_version;

};
}



#endif //RADF_FILEHEADER_H
