#ifndef INC_SAMPLEINFO_HPP
#define INC_SAMPELINFO_HPP_
#endif

class SampleInfo {
public:
	SampleInfo(const string &info); 
private:
	string m_filepath;
	int m_num;
	int (*m_points)[4];
}
