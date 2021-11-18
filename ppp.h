#ifndef PROGRAMMING_PRINCIPLES_PRACTICE_H	
#define PROGRAMMING_PRINCIPLES_PRACTICE_H

#include <algorithm>
#include <array>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <forward_list>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <numeric>
#include <random>
#include <regex>
#include <sstream>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace ppp
{
	inline void keep_window_open()
	{
		std::cin.clear();
		std::cin.sync_with_stdio(false);
		std::cin.ignore(std::cin.rdbuf()->in_avail());	//clear cin buffer
		std::cout << "\nPress Enter key to continue";
		std::cin.get();
	}

	inline void error(const std::string s)
	{
		throw std::runtime_error(s);
	}

	inline void error(const std::string s, const std::string s2)
	{
		error(s + s2);
	}

	inline void error(const std::string s, int i)
	{
		std::ostringstream os;
		os << s << ": " << i;
		error(os.str());
	}

	template<typename Target, typename Source>
	Target narrow_cast(const Source& a)
	{
		auto r = static_cast<Target>(a);
		if(static_cast<Source>(r) != a){
			throw std::runtime_error("narrow_cast<>() failed");
		}
		return r;
	}
}

#endif	