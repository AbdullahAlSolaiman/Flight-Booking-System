int BinarySearch(int search_key, int ArraySize, const Flights array[]) {
	bool found = false;
	int index = -1 
		int Middle,
		Left = 0,
		Right = ArraySize - 1;
	while ((Left <= Right) && (!found)) {
		Middle = (Left + Right) / 2; 
		if (array[Middle] == search_key) {
			index = Middle;
			found = true;
		}
		else if (array[MIDDLE] > search_key)
			RIGHT = MIDDLE – 1; // search is focused on the left side of list
		else
			LEFT = MIDDLE + 1; // search is focused on the right side of the list
	}
	return index;
}
