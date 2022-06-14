//Given a heap, which might violate the property of min-heap at its ith node, we need to convert it to min-heap
void minheapify(int i) {
    int lt = left(i), rt = right(i);
    smallest = i;
    if(lt<size && arr[lt]<arr[smallest]) smallest = lt;
    if(rt<size && arr[rt]<arr[smallest]) smallest = rt;
        
    if(smallest!=i) {
      swap(arr[i], arr[smallest]);
      minheapify(smallest);
    }
}
