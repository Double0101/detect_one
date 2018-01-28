#include <vector>
#include <string>

class SampleInfo {
public:
	SampleInfo(const std::string &info);
	void print();
    const std::string getpath();
	const int getnum();
	const std::vector<std::vector<int>> getRects();
private:
	std::string m_filepath;
	int m_num;
	std::vector<std::vector<int>> m_points;
};

