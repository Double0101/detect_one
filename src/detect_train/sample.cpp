#include <sstream>
#include "sample.hpp"
SampleInfo::SampleInfo(const string &info) {
	std::istringstream isstr(info);
	isstr >> m_filepath;
	isstr >> m_num;

}
