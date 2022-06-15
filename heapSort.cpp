//Converting a given index to max-heap
void maxHeapify(int arr[], int n, int i) {
    int largest=i, lt=2*i+1,rt=2*i+2;
    if(lt<n && arr[lt]>arr[largest]) largest = lt;
    if(rt<n && arr[rt]>arr[largest]) largest = rt;
    
    if(i!=largest) {
        swap(arr[largest], arr[i]);
        maxHeapify(arr, n, largest);
    }
}

//Building a max-heap of given array
void buildHeap(int arr[], int n) {
    for(int i=(n-2)/2;i>=0;i--) {
        maxHeapify(arr, n, i);
    }
}

//Heap-Sort
void heapSort(int arr[], int n) {
    buildHeap(arr, n);
    for(int i=n-1;i>=1;i--) {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}
