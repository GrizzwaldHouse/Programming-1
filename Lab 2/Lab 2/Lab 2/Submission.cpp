#include <iostream>
#include <string>
#pragma warning(disable:4244)

using namespace std;

class Submission {
public:

	/* Test 3
	 * =========
	 * Given a string, using the stoi() method, convert the string 
	 * to an integer. Return the integer.
	*/
	static int Test3(string input) {

		// initialize a placeholder variable result
		int result = 0;

		//Using stoi, convert input to a integer and store it in result
		
		
		 result = stoi(input) ;

	



		// Return result 
		return result ;


	}

	/* Test 4
	 * =========
	 * Given a string, using the stod() method, convert the string
	 * to a double. Return the double.
	*/
	static double Test4(string input) {

		// initialize a placeholder variable result
		double result = 0;

		//Using stod, convert input to a integer and store it in result
		result = stod (input);

		//Return result 
		return result ;
	}

	/* Test 5
	 * =========
	 * Given a string, using the stof() method, convert the string
	 * to a float. Return the float.
	*/
	static float Test5(string input) {

		//initialize a placeholder variable result
		float result = 0;

		//Using stof, convert input to a float and store it in result
		result = stof(input);

		//Return result
		return result;
	}

	/* Test 6
	 * =========
	 * Given a string, using the stoul() method, convert the string
	 * to an unsigned integer. Return the unsigned integer.
	*/
	static unsigned int Test6(string input) {
		
		//initialize a placeholder varaible result
		unsigned int result = 0;

		//Using stoul, convert input to a unsigned int and store it in result
		result = stoul(input);
		//Return result
		return result ;

	}

	/* Test 7
	 * =========
	 * Given a string, using the stoull() method, convert the string
	 * to an unsigned long. Return the unsigned long.
	*/
	static unsigned long Test7(string input) {

		//initialize a placeholder varaible result 
		unsigned long result = 0;

		//Using stoull, convert input to a unsigned long and store it in result 
		result = stoull(input);

		//Return result
		return result;
		
	}

	/* Test 8
	 * =========
	 * Given a double, using a cast, convert the double
	 * to a float. Return the float.
	*/
	static float Test8(double input) {

		//initialize a placeholder varaible result
		float result = 0;
		
		//using cast convert the double to a float and store it in result
	
		result = (float) input;
		
		//Return result

		return result ;
	}

	/* Test 9
	 * =========
	 * Given a float, using a cast, convert the float
	 * to an integer. Return the integer.
	*/
	static int Test9(float input) {

		//initialize a placeholder varaible result 
		int result = 0;

		//Using cast convert float to a integar and store it in result
		 result = (int) input;
		
		//Return result
		
		return result;

	}

	/* Test 10
	 * =========
	 * Given an integer, convert the integer
	 * to a string using the to_string() method.
	 *
	 * Return the string.
	 *
	 * References:
	 * - https://cplusplus.com/reference/string/to_string/
	 * - https://www.geeksforgeeks.org/stdto_string-in-cpp/
	*/
	static string Test10(int input) {
		//initialize a placeholder varaible result
		string result = "";

		//Using to_string convert integer into a string and store it in result
		
		result = to_string(input);
		
		//Return result
		 
				return result;
	}
};