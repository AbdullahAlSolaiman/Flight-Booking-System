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
	int ArrayOfMatches[7];
	return index;
}

int SequentialSearch(string SearchKey1, string SearchKey2, int ArraySize, const Flight Array[], Flight matches[]) {
	int j = 0;
	for (int i = 0; i < ArraySize; i++) {

		if (Array[i].GetSource() == SearchKey1)
			if (Array[i].GetDestination() == SearchKey2)
				matches[j++] = Array[i]; //matches stored in an array
	}
	return j; //total number of matches
}