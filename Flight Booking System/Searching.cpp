#include "Flight.h"

int BinarySearch(string SearchKey, int ArraySize, const Flight array[]) {
	bool found = false;
	int index = -1;
		int Middle, Left = 0, Right = ArraySize - 1;
	while ((Left <= Right) && (!found)) {
		Middle = (Left + Right) / 2; 
		if (array[Middle].GetSource() == SearchKey) {
			index = Middle;
			found = true;
		}
		else if (array[Middle].GetSource() > SearchKey)
			Right = Middle - 1; // search is focused on the left side of list
		else
			Left = Middle + 1; // search is focused on the right side of the list
	}
	return index;
}
