#include <iostream>

using namespace std;


class Array
{
private:
	int size;// actual physical size in memory
	int curr; //logical size mean elements in the array
	int* arr;

	//Parametrized

public :
	Array(int s = 10)
	{
		//Dynamic Array on Heap
		arr = new int[s];
		//actual size
		size = s;
		//logical size
		curr = 0;
	}

	void insert(int no)
	{
		//logical must be less than our actual size
		if (curr < size)
		{
			//put the element
			arr[curr] = no;

			//increase the current size
			curr = curr + 1;
		}

		else
			cout << "No more elements can be entered\n";
	}

	void display() {

		if (curr == 0)
		{
			cout << "Array is Empty\n";

		}
		else {
			for (int i = 0; i < curr; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}
	}

	//prevents memory leaks
	~Array()
	{
		delete[] arr;
	}


};





void ran()
{
	int a2;
	int* a1 = new int; //address of the heap memory 

	cout << a1 << endl; //print the address

	//derefrencing operator (*) 
	*a1 = 8;
	cout << *a1 << endl;

	delete a1;
}
int main()
{

	//stack memory compile time fixed in size (arrays)

	/*int a, b;
	string name;

	int* arr = new int[5];
	arr[0] = 90;
	arr[1] = 98;

	delete [] arr;*/
	//ran();

	Array A(3);

	A.display();

	A.insert(1);
	A.insert(2);
	A.insert(3);
	A.insert(4);

	A.display();

	//heaps or dynamic memory allocation

	//new ->> heap memory allocation or Dynamic memory allocation
	

	//delete a1;



	//memort leaks if we donont use delete keywords
}