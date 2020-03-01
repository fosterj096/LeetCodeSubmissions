//A collection of Justin's LeetCode problems.

/* Two Sum Problem
	Given an array of integers, return indices of the two numbers such that they add up to a specific target.

	You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

/* 
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int size = nums.size();
		int firstIndex = 0, secondIndex = 0;
		for(int i = 0; i < size; i++)
		{
			for(int j = 0; j < size; j++)
			{
				if(j == i) //can't use the same index + itself 
					break;

				if(nums[i] + nums[j] == target)
				{
					firstIndex = i;
					secondIndex = j;
				}
			}
		}
		for(int i = 0; i < size; i++)
			nums.pop_back();

		nums.push_back(secondIndex);
		nums.push_back(firstIndex);
		cout << "[" << secondIndex << ", " << firstIndex << "]" << endl;
		return nums;
	}
};

Runtime: 244 ms
Memory Usage: 8.4 MB
*/

//To Lower - Using Ascii
//Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.
/*
class Solution {
public:
	string toLowerCase(string str) {

		int size = str.size();
		string newStr;
		for(int i = 0; i < size; i++)
		{
			char temp = str[i];
			//Using ascii value manipulation to convert upper to lower
			if(temp >= 65 && temp <= 90)
			{
				temp += 32;
			}
			newStr += temp;
			cout << temp;
		}
		return newStr;
	}
};

Runtime: 0 ms, faster than 100.00% of C++ online submissions for To Lower Case.
Memory Usage: 7.3 MB, less than 100.00% of C++ online submissions for To Lower Case.
*/

//Valid Parenthesis
/*Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

Note that an empty string is also considered valid.

class Solution {
public:
	bool isValid(string s) {

		stack<char> parenStack;
			//string parenth;
			char tempStore; //variable used to store the value of the top of the stack
			bool balanced = false;
			cout << "Enter your equation." << endl;
			//cin >> parenth;

			const int size = s.size();

			if(size == 0)
				balanced = true;

			for (int i = 0; i < size; i++)
			{
				if (s[i] == '(' || s[i] == '{' || s[i] == '[')
					parenStack.push(s[i]);


				switch (s[i]) {

				case ')':
					tempStore = parenStack.top();
					parenStack.pop();
					if (tempStore == '('){
						cout << "() brackets are balanced." << endl;
						balanced = true;
					}

					else {
						cout << "() brackets are not balanced. " << endl;
						balanced = false;
					}
					break;

				case '}':
					tempStore = parenStack.top();
					parenStack.pop();
					if (tempStore == '{'){
						cout << "{} brackets are balanced." << endl;
						balanced = true;
					}

					else {
						cout << "{} brackets are not balanced. " << endl;
						balanced = false;
					}
					break;

				case ']':
					tempStore = parenStack.top();
					parenStack.pop();
					if (tempStore == '['){
						cout << "[] brackets are balanced." << endl;
						balanced = true;
					}

					else {
						cout << "[] brackets are not balanced. " << endl;
						balanced = false;
					}
					break;

				}
			}
		return balanced;
		}
};

