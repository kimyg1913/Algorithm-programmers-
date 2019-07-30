#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
	int answer = 0;
	vector<char> vChars;

	for (int i = 0; i < s.length(); ++i)
	{
		vChars.push_back(s[i]);
		if (vChars.size() > 2)
		{
			int index = vChars.size();
			if (vChars[index - 1] == vChars[index - 2])
			{
				vChars.pop_back();
				vChars.pop_back();
			}
		}
	}

	if (vChars.size() == 0)
		return 1;
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "Hello Cpp" << endl;

	return answer;
};
int main()
{

	solution(string("baabaa"));

	return 0;

}