#include <string>
#include <vector>
#include "Shape.cpp"
#include "Book.cpp"
#include "TextCodec.cpp"


using namespace std;

class Submission {
public:

#ifdef SHAPE

	/* TODO: Test 1 - Create a Circle class
	 * =======================================
	 * First, create a Circle class that contains the
	 * constructors, attributes, accessors, and mutators
	 * outlined on FSO and add the line "#define SHAPE",
	 * without quotes, to the top of the file.
	 *
	 * TODO: Uncomment out line 5 above.
	 * Once the class has been created, initialize and return a
	 * Circle-type object using the given x, y, and radius
	 * parameters.
	 *
	 * Tips:
	 * - You should create a new Shape.cpp by right-clicking the
	 *   Source Files folder in the Solution Explorer, and selecting
	 *   "New Item..."
	 * - Once you have created your Shape.cpp file, it will not be
	 *   accessible within the Submission.cpp file until you uncomment
	 *	 the corresponding lines above.
	 */
	static Circle Test1(int x, int y, int radius) {
		Circle c1(x, y, radius);
		return c1;
	}

	/* TODO: Test 2 - Create the GetArea() member method
	 * ==================================================
	 * Inside the Circle class within your Shape.cpp file,
	 * create a new member method called GetArea(). This
	 * method should return the area of the current Circle
	 * object represented as a float.
	 *
	 * Once the method has been created, initialize and return a
	 * Circle-type object using the given x, y, and radius
	 * parameters.
	 *
	 * Resources:
	 * - https://www.mathsisfun.com/geometry/circle-area.html
	 * - https://en.wikipedia.org/wiki/Area_of_a_circle
	 *
	 * Tips:
	 * - You will not be able to complete Test 2 until Test 1
	 *   is fully completed.
	 * - C++ does not contain a constant variable defining the
	 *   value for Pi. As a result, you should use a float value
	 *	 of 3.14f.
	 *
	 */
	static Circle Test2(int x, int y, int radius) {
		Circle c1(x, y, radius);
		return c1;
	}

	/* TODO: Test 3 - Create the GetCircumference() member method
	 * ==================================================
	 * Inside the Circle class within your Shape.cpp file,
	 * create a new member method called GetCircumference().
	 * This method should return the area of the current Circle
	 * object represented as a float.
	 *
	 * Once the method has been created, initialize and return a
	 * Circle-type object using the given x, y, and radius
	 * parameters.
	 *
	 * Resources:
	 * - https://www.mathsisfun.com/definitions/circumference.html
	 * - https://en.wikipedia.org/wiki/Circumference
	 *
	 * Tips:
	 * - You will not be able to complete Test 3 until Test 1
	 *   is fully completed.
	 * - C++ does not contain a constant variable defining the
	 *   value for Pi. As a result, you should use a float value
	 *	 of 3.14f.
	 *
	 */
	static Circle Test3(int x, int y, int radius) {
		Circle c1(x, y, radius);
		return c1;
	}

	/* TODO: Test 4 - Create the GetDiameter() member method
	 * ==================================================
	 * Inside the Circle class within your Shape.cpp file,
	 * create a new member method called GetDiameter().
	 * This method should return the diameter of the current
	 * Circle object represented as an integer.
	 *
	 * Once the method has been created, initialize and return a
	 * Circle-type object using the given x, y, and radius
	 * parameters.
	 *
	 * Resources:
	 * - https://www.mathsisfun.com/definitions/diameter.html
	 * - https://en.wikipedia.org/wiki/Diameter
	 *
	 * Tips:
	 * - You will not be able to complete Test 3 until Test 1
	 *   is fully completed.
	 *
	 */

	static Circle Test4(int x, int y, int radius) {
		Circle c1(x, y, radius);
		return c1;
	}

#endif

#ifdef TEXT_CODEC
	/* TODO: Test 5 - Create a TextCodec class and Encode member method
	 * ====================================================================
	 * First, create a TextCodec class that contains
	 * the constructors, attributes and Encode() method
	 * outlined on FSO and add the line "#define TEXT_CODEC",
	 * without quotes, to the top of the file.
	 *
	 * TODO: Uncomment out line 8 above.
	 * Once the class has been created, initialize a
	 * TextCodec-type object using the given offset
	 * parameters.
	 *
	 * Finally, call the Encode() method on the TextCodec
	 * object you have created and pass the given message
	 * string parameter. Return the string result of the
	 * Encode() method.
	 *
	 *
	 * Tips:
	 * - You should create a new TextCodec.cpp by right-clicking the
	 *   Source Files folder in the Solution Explorer, and selecting
	 *   "New Item..."
	 * - Once you have created your TextCodec.cpp file, it will not be
	 *   accessible within the Submission.cpp file until you uncomment
	 *	 the corresponding lines above.
	 */

	static string Test5(short int offset, string message) {
		TextCodec Codec(offset);
		string result = Codec.Encode(message);
		return result;
	}

	/* TODO: Test 6 - Create the Decode member method
	 * =================================================
	 * Inside the TextCodec class within your TextCodec.cpp file,
	 * create a new member method called Decode() using the return
	 * type and code provided on FSO.
	 *
	 * Once the method has been created, initialize a
	 * TextCodec-type object using the given offset and
	 * message parameters.
	 *
	 * Finally, call the Encode() method on the TextCodec
	 * object you have created and pass the given message
	 * string parameter. Return the string result of the
	 * Encode() method.
	 *
	 *
	 * Tips:
	 * - You will not be able to complete Test 6 until Test 5
	 *   is fully completed.
	 */
	static string Test6(short int offset, string message) {
		TextCodec Codec(offset);
		string result = Codec.Decode(message);
		return result;
	}

#endif

#ifdef BOOK
	/* TODO: Test 7 - Create a Book class
	 * ====================================================================
	 * First, create a Book class that contains the
	 * constructors, attributes, and accessors
	 * outlined on FSO and add the line "#define BOOK",
	 * without quotes, to the top of the file.
	 *
	 * TODO: Uncomment out line 11 above.
	 * Once the class has been created, initialize and return a
	 * Book-type object using the default constructor.
	 *
	 * Tips:
	 * - You should create a new Book.cpp by right-clicking the
	 *   Source Files folder in the Solution Explorer, and selecting
	 *   "New Item..."
	 * - Once you have created your Book.cpp file, it will not be
	 *   accessible within the Submission.cpp file until you uncomment
	 *	 the corresponding lines above.
	 */

	static Book Test7() {
		Book book1;
		
		return book1;
	}

	/* TODO: Test 8 - Create an overloaded constructor
	 * =================================================
	 * Inside the Book class within your Book.cpp file,
	 * create an overloaded constructor that accepts the
	 * parameters outlined on FSO.
	 *
	 * Once the constructor has been created, initialize
	 * and return a Book-type object using the given author,
	 * and title parameters.
	 *
	 * Resources:
	 * - https://www.geeksforgeeks.org/constructor-overloading-c/
	 * - https://www.programiz.com/cpp-programming/constructor-overloading
	 */

	static Book Test8(string title, string author)
	{
		Book book2(title, author);

		return book2;
	}
#endif
};