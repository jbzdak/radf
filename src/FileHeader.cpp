//
// Created by jb on 5/14/15.
//

#include "FileHeader.h"

using namespace RADF;

namespace RADF{

  // TODO: Add endiannes check
  std::ostream &operator<<(std::ostream &ostr, const FileHeader &header) {
    for (auto b: header.magic) {
      ostr << b;
    }
    ostr.write(reinterpret_cast<const char*>(&header.file_version), sizeof(header.file_version));
    return ostr;
  }
}