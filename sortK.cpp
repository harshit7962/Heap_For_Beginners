//Given an array which is semi-sorted...
//By sem-sorted, we mean that element at index i in unsorted array will be present in the range [i-k, i+k] in sorted array...
//Sort a k-sorted array
void sortK(int arr[], int n, int k) {
    //Create a priority queue
    priority_queue<int,vector<int>, greater<int>> pq;
    
    //Initialize the priority queue
    for(int i=0;i<=k;i++) pq.push(arr[i]);
    
    //add elements to the array till priority key is empty
    int index = 0;
    for(int i=k+1;i<n;i++) {
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    
    while(!pq.empty()) {
        arr[index++] = pq.top();
        pq.pop();
    }
}
