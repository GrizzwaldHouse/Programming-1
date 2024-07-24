#include <string>

using namespace std;

class Student
{

public:
    string LastName = "";
    string FirstName = "";
    int IDNumber = 10000000;



    Student()
    {
        LastName = "LastName";
        FirstName = "FirstName";
        IDNumber = 1000000;
    }
    Student(string lastName, string firstName, int iDNumber)
    {
        this->LastName = lastName;
        this->FirstName = firstName;
        this-> IDNumber = iDNumber;

    
    }
    //accessors methods
    string GetLastName()
    {
        return LastName;
    }
    string GetFirstName()
    {
        return FirstName;
    }
    int GetIDNumber()
    {
        return IDNumber;
    }
    void SetLastName(string lastName)
    {
        LastName = lastName;
    }
    void SetFirstName(string firstName)
    {
        FirstName = firstName;
    }
    void SetIDNumber(int iDNumber)
    {
         IDNumber = iDNumber;
    }


    // NOTE: The student class continues beneath this line. DO NOT close the Student
    //       class code block prematurely by adding an extra closing curly bracket.

    /* ================================================================================
     *
     * DO NOT ALTER ANYTHING BENEATH THIS LINE.
     *
     * DOING SO MAY CAUSE ISSUES WITHIN YOUR CODE.
     *
     * IF YOU ARE EXPERIENCING ERRORS IN THIS CLASS,
     * AND YOU HAVE NOT ALTERED THIS CLASS, THE ISSUES
     * EXIST WITHIN YOUR CODE. NOT HERE.
     *
     *                             ▒▒████
     *                             ████████
     *                           ██████████
     *                           ████▒▒██████
     *                         ██████    ████▒▒
     *                         ████      ▒▒████
     *                       ██████        ██████
     *                     ▒▒████    ████    ████
     *                     ████▒▒  ████████  ██████
     *                   ██████    ████████    ████
     *                   ████░░    ████████    ██████
     *                 ██████      ████████      ████▒▒
     *               ░░████        ████████      ▒▒████
     *               ██████        ████████        ██████
     *             ▒▒████          ████████          ████
     *             ████▒▒          ██████▒▒          ██████
     *           ██████              ████              ████
     *           ████                ████              ██████
     *         ██████                ████                ████▒▒
     *       ░░████                                      ▒▒████
     *       ████▓▓                                        ██████
     *     ▒▒████                    ████                    ████
     *     ████▒▒                  ████████                  ██████
     *   ██████                      ▒▒▒▒                      ████░░
     *   ████                                                  ▒▒████
     * ██████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒██████
     * ████████████████████████████████████████████████████████████████
     * ▓▓████████████████████████████████████████████████████████████▓▓
     *
     *
     */

	string ToString()
	{
		return "ID #: " + to_string(GetIDNumber()) + "\tName: " + GetLastName() + ", " + GetFirstName();
	}
};