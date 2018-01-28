#include <iostream>
#include <sstream>
#include "sample.hpp"

SampleInfo::SampleInfo(const std::string &info) {
	std::istringstream isstr(info);
	isstr >> m_filepath;
	isstr >> m_num;

	m_points.resize(m_num);

	for (auto it = m_points.begin(); it != m_points.end(); ++it)
	{
		int point;
		for (int i = 0; i < 4; ++i) 
		{
			isstr >> point;
			it -> push_back(point);
		}
	}
}

void SampleInfo::print() {
	std::cout << getpath() << " ";
	std::cout << getnum() << " ";
	for (int i = 0; i < getnum(); ++i)
	{
		std::cout << m_points[i][0] << " ";
		std::cout << m_points[i][1] << " ";
		std::cout << m_points[i][2] << " ";
		std::cout << m_points[i][3] << " ";
	}
	std::cout << "end" << std::endl;
}

const std::string SampleInfo::getpath() {
	return m_filepath;
}
const int SampleInfo::getnum() {
	return m_num;
}
const std::vector<std::vector<int>> SampleInfo::getRects() {
	return m_points;
}
