#include<iostream>
#include<string.h>

using namespace std;

class ShoppingCart {
private:
	Item* list_of_items;
	int TotalPrice;
	int currentSize;

public:

	ShoppingCart() :list_of_items(nullptr) {}


	ShoppingCart operator+=(Item& obj)
	{
		Item* temp = nullptr;
		if (list_of_items)
		{

			temp = new Item[currentSize];
			for (int i = 0;i < currentSize;i++)
			{
				temp[i] = list_of_items[i];
			}

			delete[] list_of_items;
		}

		list_of_items = new Item[currentSize + 1];
		for (int i = 0;i < currentSize;i++)
		{
			list_of_items[i] = temp[i];
		}
		list_of_items[currentSize] = obj;
		currentSize++;

		return *this;

	}


	ShoppingCart operator-=(string s)
	{

        Item temp;
        


	}

	ShoppingCart operator~()
	{

	}

	friend ostream& operator<<(ostream& out, ShoppingCart& obj);

~ShoppingCart()
{
	delete[] list_of_items;
	list_of_items = nullptr;
}

};

