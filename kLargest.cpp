//Here we need to print the largest k elements of an array...
//We can simply sort the array and print the last k elements but using a heap we can code a faster algorithm...

/**
The idea here is to store first k elements in a min-heap and then traverse through the array,
and if the array element is greater than the top of the heap, we remove the top of the heap and push the new element,
In this way we maintain the k-largest elements in a heap... and finally we print them...
*/
void kLargest(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr+k);
    for(int i=k;i<n;i++){
        if(pq.top()<arr[i]) {pq.pop();pq.push(arr[i]);}
    }
    
    //The order of elements is not considered here... we can do it by declaring a vector of size k and storing the top element in reverse order
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}
