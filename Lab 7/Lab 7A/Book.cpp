#include <iostream>
#include <string>
#define BOOK
using namespace std;

class Book
{
private:
	string title;
	string author;

public:

	Book()
	{
		title = "Moby-Dick";
		author = "Herman Melville";
	}

	Book(string title, string author)
	{
		this->title = title;
		this->author = author;

		
	}
	string GetTitle()
	{
		return title;
	}

	string GetAuthor()
	{
		return author;
	}
	
};
