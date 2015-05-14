//
// Created by jb on 5/14/15.
//

#ifndef RADF_VERSION_H
#define RADF_VERSION_H

#include <cstdint>
#include <array>

namespace RADF{

  typedef std::array<uint8_t , 16> uuid_bytes;
  extern const uint16_t current_version;
  extern const uuid_bytes magic_bytes;

}

#endif //RADF_VERSION_H
