//Given an array, a value and a number k, we need to print k elements which have least difference from val in the array

//The idea here is to find k-smallest elements using a max-heap... approach is similar to finding k-largest elements using a min-heap
//But here we store the difference between value and array element as our smallest comparator and store its index as well to keep track of the elemnt...
void kClosest(int arr[], int n, int k, int val) {
    priority_queue<pair<int, int>> pq;
    for(int i=0;i<k;i++) pq.push({abs(val-arr[i]), i});
    
    for(int i=k;i<n;i++) {
        if(abs(val-arr[i])<pq.top().first) {pq.pop(); pq.push({abs(val-arr[i]), i});}
    }
    
    while(!pq.empty()) {
        cout << arr[pq.top().second] << " ";
        pq.pop();
    }
    
    return;
}
