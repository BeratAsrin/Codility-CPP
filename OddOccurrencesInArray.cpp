/*
A non-empty array A consisting of N integers is given. The array contains an odd number of elements, and each element of the array can be paired with another element that has the same value, except for one element that is left unpaired.

For example, in array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the elements at indexes 0 and 2 have value 9,
the elements at indexes 1 and 3 have value 3,
the elements at indexes 4 and 6 have value 9,
the element at index 5 has value 7 and is unpaired.
Write a function:

int solution(vector<int> &A);

that, given an array A consisting of N integers fulfilling the above conditions, returns the value of the unpaired element.

For example, given array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the function should return 7, as explained in the example above.

Write an efficient algorithm for the following assumptions:

N is an odd integer within the range [1..1,000,000];
each element of array A is an integer within the range [1..1,000,000,000];
all but one of the values in A occur an even number of times.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A){
	sort(A.begin(),A.end());
	if(A.size() == 1 || A[0] != A[1]){
		return A[0];
	}
	for(int i=1; i<A.size();i++){
		if((A[i] == A[i-1]) || (A[i] == A[i+1])){
			continue;
		}
		return A[i];
	}
	return A[A.size()-1];
}

int main(){
	vector<int> A = {7,9,3,3,3,3,9};
	cout << solution(A);
}
