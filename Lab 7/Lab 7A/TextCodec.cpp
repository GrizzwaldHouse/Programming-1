#include <iostream>
#include <string>
#define TEXT_CODEC

using namespace std;

// Creating the TextCodec class that is publicly accessible.
class TextCodec
{
public:
	short int offset;


	TextCodec (short int offset)
	{
		this->offset = offset;
	}
	string Encode(string message)
	{
		string result = message;
		for (int i = 0; i < message.length(); i++)
		{
			result[i] = (char)(result[i] + offset);
		}
		return result;
		TextCodec codec(offset);
	}
			string Decode(string message)

			{
				string result = message;
				for (int i = 0; i < message.length(); i++)
				{
					result[i] = (char)(message[i] - offset);

				}
				return result;
			}
		
	
};