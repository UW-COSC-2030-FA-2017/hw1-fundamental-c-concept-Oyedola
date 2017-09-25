//Oyedola Ajao
//HW1 - part 2/2

#ifndef COLLECTION_H
#define COLLECTION_H

#include "utility"
#include <iostream>
#include <cstdlib>
using std::rand;

template < class U >
class collection
{
public:
	collection();
	collection(int si);
	~collection();
	int getsize();
	void setsize(int p);
	bool isEmpty();
	void makeEmpty();
	void insert(U value);
	void remove(U value);
	void removeRandom();
	bool notContained(U value);
	void print();
	void set(U Array[]);

private:
	int size;
	U *coll;
};

#endif

template <class U>
collection<U>::collection()
{
	
}

template<class U>
collection<U>::~collection()
{
	delete coll;
}

template <class U>
collection<U>::collection(int si)
{
	size = si;
	coll = new U[size];
}

template <class U>
void collection<U>::setsize(int p)
{
	size = p;
}

template <class U>
int collection<U>::getsize()
{
	cout << "The array has a size of : " << size << endl;

	return size;
}

template <class U>
bool collection<U>::isEmpty()
{
	for (int i = 0; i < size; i++)
	{
		if (coll[i] != NULL)
		{
			cout << "False : there are objects in this collection." << endl << endl;

			return false;
		}
		else
		{
			cout << "True : there are no objects in this collection." << endl << endl;

			return true;
		}
	}
	return 0;
}

template <class U>
void collection<U>::makeEmpty()
{
	for (int i = 0; i < size; i++)
	{
		coll[i] = NULL;
	}

	cout << "All objects in the collection have been removed." << endl;
}

template <class U>
void collection<U>::insert(U value)
{
	U *A = new U[size + 1];

	int j = 0;

	for (int j = 0; j < size; j++)
	{
		A[j] = coll[j];
	}

	A[j] = value;

	delete coll;

	set(A);

	cout << "The object " << value << " has been inserted into the collection." << endl;
}

template <class U>
void collection<U>::remove(U value)
{
	int count(0);

	int x(0);

	for (int i = 0; i < size; i++)
	{
		if (coll[i] == value)
		{
			for (int i = x; i < size - 1; i++)
			{
				coll[i] = coll[i + 1];
			}

			count++;

			break;
		}
	}

	if (count == 0)
	{
		cout << "Object " << value << " has been removed from the collection." << endl;
	}
	else
	{
		coll[size--] = NULL;
	}

	cout << "Object " << value << " has been removed from the collection." << endl;
}

template <class U>
void collection<U>::removeRandom()
{
	int ran = rand() % size;

	for (int i = 0; i < size; i++)
	{
		if (i == ran)
		{
			for (int k = i; k < size-1; k++)
			{
				coll[k] = coll[k + 1];
			}

			break;
		}
	}

	coll[size--] = NULL;

	cout << "A random object from the collection has been removed." << endl;
}

template <class U>
bool collection<U>::notContained(U value)
{
	for (int i = 0; i < size; i++)
	{
		if (coll[i] == value)
		{
			cout << "True (Yes) " << value << " is present in the collection." << endl << endl;
			
			return true;
		}
	}

	cout << "False (No) " << value << " is not present in the collection." << endl << endl;
	
	return false;
}

template <class U>
void collection<U>::print()
{
	cout << endl << "The Array Now Contains : " << endl << endl;

	for (int j = 0; j < size; j++)
	{
		if (j != (size - 1))
		{
			cout << coll[j] << " ";
		}
	}

	cout << endl << endl;
}

template <class U>
void collection<U>::set(U Array[])
{
	for (int j = 0; j < size; j++)
	{
		coll[j] = Array[j];
	}
}
