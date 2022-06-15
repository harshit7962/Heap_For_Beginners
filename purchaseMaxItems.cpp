//Given an array of prices of items and total amount, we need to return maximum number of items we can purchase

//Method 1: Sorting (O(n*logn))
int purhaseMaxItems(int arr[], int  n, int sum) {
    sort(arr, arr+n);
    int i=0;
    while(sum>0) {
        sum-=arr[i++];
    }
    return (sum==0)?i:i-1;
}

//Method 2: Priority  Queue (O(res*logn)) res can at max be n
int purhaseMaxItems2(int arr[], int n, int sum) {
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr+n);
    int res=0;
    while(pq.top()<=sum){
        pq.pop();
        res++;
    }
    
    return res;
}
