#include<iostream>
#include<string>
using namespace std;
class Inventory
{
private:
	int ItemNumber, quantity;
	double cost, totalcost;
public:
	Inventory()
	{
		ItemNumber = 0;
		quantity = 0;
		cost = 0;
		totalcost = 0;
	}
	Inventory(int item, int quant, double cos, double totalcos)
	{
		ItemNumber = item;
		quantity = quant;
		cost = cos;
		totalcost = totalcos;

	}
	void setItemNumber(int item)
	{
		ItemNumber = item;
	}
	void setQuantity(int quant)
	{
		quantity = quant;
	}
	void setCost(double cos)
	{
		cost = cos;
	}
	void setTotalcost(double totalcos)
	{
		totalcost = totalcos;
	}
	int getItemNumber()
	{
		return ItemNumber ;
	}
	int getQuantity()
	{
		return quantity;
	}
	double getCost()
	{
		return cost ;
	}
	double getTotalcost()
	{
		return totalcost ;
	}
};
int main()
{
	Inventory store;
}