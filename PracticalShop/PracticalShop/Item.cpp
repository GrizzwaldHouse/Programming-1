#include<iostream>
#include <string>
using namespace std;
class Item
{
	/* TODO: Create an Item class
	* ===================================
	* The class should contain 2 data members:
	* - A string called name
	* - An int called cost.
	*
	* This class should have a default constructor
	* that sets name to "" and cost to 0.
	*
	* It should also have an overloaded constructor
	* that accepts 2 parameters:
	* - A string
	* - An int.
	*
	* Write getters/accessors for each data member.
	* They should be called GetName and GetCost.
	*
	* Write setters/mutators for each data member.
	* They should be called SetName and SetCost.
	*/

	string name;
	int cost;

public:
	
	Item()
	{
		string 	Name = "";
		int	Cost = 0;

	}
	Item(string Name, int Cost)
	{
		this->name = Name;
		this->cost = Cost;
	}

	string GetName()
	{
		return name;
	}
	int GetCost()
	{
		return cost;

	}
	void SetName(string Name)
	{
		name = Name;
	}
	void SetCost(int Cost)
	{
		cost = Cost;
	}
	
	
};