//Given a min heap, we want to remove the minimum element and adjust our heap after removing it...
int extractMin() {
    if(size==0) return INT_MAX;
    if(size==1) {size--; return arr[0];}
    
    swap(arr[0], arr[size-1]);
    size--;
    minheapify(0);
    
    return arr[size];
}
