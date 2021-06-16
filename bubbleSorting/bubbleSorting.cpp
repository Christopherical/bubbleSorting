#include <iostream>
using namespace std;


void arrayFunc(int* bubbleArray, int size) {	

	int count = 0;

	while (true) {
		for (int i = 0; i < size; i++) {
			if (i == 0){
				continue;
			}
			
			count = 0;
			int before = bubbleArray[(i - 1)];
			int current = bubbleArray[i];

			cout << "before = " << before;
			cout << " | current = " << current << endl;

			if (before > current) {
				bubbleArray[(i - 1)] = current;
				bubbleArray[i] = before;
				count = 1;				
			}			
		}

		if (count == 0) {
			break;
		}
	}
}
int main()
{
	int bubbleArray[6] = { 5, 9, 10, 3, 2, 1};
	int size = (sizeof(bubbleArray) / sizeof(bubbleArray[0]));	

	arrayFunc(bubbleArray, size);

	for (int i = 0; i < size; i++) {
		cout << bubbleArray[i] << " ";
	}
	cout << ".";

	

	
	 
	


	return 0;
}
