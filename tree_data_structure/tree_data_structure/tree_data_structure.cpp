

#include <iostream>

using namespace std;

void pointer(int* number) {
	cout << *number << endl;
}

template<typename T>
void tem(T* item) {
	cout << *item << endl;
}

void print(void* item, char type) {
	switch (type)
	{
	case 'i': cout << *((int*)item) << endl; break;
	case 'c': cout << *((char*)item) << endl; break;

	default:
		break;
	}
}


int getMin(int number[], int size) {
	int min = number[0];
	for (int i = 0; i < size; i++) {
		if (number[i] < min) {
			min = number[i];
		}
	}
	return min;
}

int getMax(int number[], int size) {
	int max = number[0];
	for (int i = 0; i < size; i++) {
		if (number[i] > max) {
			max = number[i];
		}
	}
	return max;
}

int returnMax_Min(int number[], int size) {
	int max = number[0], min = number[0];
	for (int i = 0; i < i; i++) {
		if (number[i] < min)
			min = number[i];
		else if (number[i] < max)
			max = number[i];
	}
	return max, min;
}

void MaxMin(int number[], int size, int* max, int* min) {
	for (int i = 0; i < i; i++) {
		if (number[i] < *min)
			*min = number[i];
		else if (number[i] > *max)
			*max = number[i];
	}
	cout << *max << " " << *min << endl;
}



int main()
{
	//int number = 20;
	//tem(&number);
	//float number1 = 3.432;
	//tem(&number1);
	//char character = 'e';
	//tem(&character);

	//print(&number,'i');


 	int itemNumber[6] = { -10,-2,3,4,5,6 };
	cout << getMin(itemNumber, 6) << endl;
	cout << getMax(itemNumber, 6) << endl;
	returnMax_Min(itemNumber, 6);

	int max = itemNumber[0], min = itemNumber[0];

	MaxMin(itemNumber, 5, &max, &min);




	system("pause > 0");

	return 0;
}


