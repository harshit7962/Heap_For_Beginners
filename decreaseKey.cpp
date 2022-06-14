// Decrease a given index to value x
void decreaseKey(int x, int i) {
    arr[i]=x;
    while(i!=0 && arr[i]<arr[parent(i)]) {
        swap(arr[i], arr[parent(i)]);
        i = parent(i);
    }
}
