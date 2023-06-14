int binarySearch (int array[], int size, int SearchValue) {
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high) {
        mid = (low + high)/2;
        if (SearchValue == array[mid]) {
            return mid;
        }
        else if (SearchValue > array[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
