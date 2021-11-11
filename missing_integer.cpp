/*
Write a function:

int solution(vector<int> &A);

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [-1, -3], the function should return 1.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..100,000];
each element of array A is an integer within the range [-1,000,000..1,000,000].
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> &A){
	int n = 1;
	sort(A.begin(),A.end());
	A.erase(unique(A.begin(),A.end()),A.end());
	
	while(1){
		if(find(A.begin(),A.end(),n)!=A.end()){
			n++;
			continue;
		}
		else{
			return n;
		}
	}
}

int main(){
	vector<int> A;
	A.push_back(1);
	A.push_back(3);
	A.push_back(6);
	A.push_back(4);
	A.push_back(1);
	A.push_back(2);
	cout << solution(A);
}
