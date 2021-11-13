/*
Write a function:

int solution(string &S);

that, given a string S, returns the index (counting from 0) of a character such that the part of the string to the left of that character is a reversal of the part of the string to its right. The function should return -1 if no such index exists.

Note: reversing an empty string (i.e. a string whose length is zero) gives an empty string.

For example, given a string:

"racecar"

the function should return 3, because the substring to the left of the character "e" at index 3 is "rac", and the one to the right is "car".

Given a string:

"x"

the function should return 0, because both substrings are empty.

Write an efficient algorithm for the following assumptions:

the length of S is within the range [0..2,000,000].
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int solution(string &S){
	string left,right;
	if(S.length() == 1){
		return 0;
	}
	for(int i=1;i<S.length();i++){
		left = string(&S[0], &S[i-1]);
		right = string(&S[i], &S[S.length()]);
		cout << i << " left = " << left << " right = " << right << endl;
		reverse(left.begin(),left.end());
		if(left == right){
			return i-1;
		}
	}
	return -1;
}

int main(){
	string S = "racecar";
	cout << solution(S);
	return 0;
}
