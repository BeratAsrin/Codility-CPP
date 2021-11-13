#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string &S){
	vector<string> check = {"AA","BB","CC"};
	int flag = 0;
	size_t position;
	while(1){
		if(S.length() == 0){
			break;
		}
		for(string s:check){
			position = S.find(s);
			if(position != string::npos){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			S.erase(position,2);
			flag = 0;
		}
		else{
			break;
		}
	}
	return S;
}

int main(){
	string S = "ACCAABBC";
	cout << solution(S);
	return 0;
}
