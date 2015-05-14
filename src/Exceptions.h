//
// Created by jb on 5/14/15.
//

#ifndef RADF_EXCEPTIONS_H
#define RADF_EXCEPTIONS_H

#include <string>
#include <stdexcept>

class radf_error: public std::logic_error{
public:
  explicit radf_error(const std::string& __arg):
    std::logic_error(__arg){};
};

class file_write_error: public radf_error{
public:
  explicit file_write_error(const std::string& __arg):
    radf_error(__arg){};
};

#endif //RADF_EXCEPTIONS_H
