#ifndef HEADER_H
#define HEADER_H

#include <string>
#include <tuple>
#include <vector>
#include <iostream>
using std::endl;
using std::cin;
using std::cout;
using std::exception;
using std::string;
using std::vector;

template <typename _Ty1, typename _Ty2, typename _Ty3>
using triple_t = std::tuple<_Ty1, _Ty2, _Ty3>;

using date_t = triple_t<size_t, size_t, size_t>;
using fullname_t = triple_t<string, string, string>;
#endif
