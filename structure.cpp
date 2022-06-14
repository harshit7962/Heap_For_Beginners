//Here we are defining the strucute of our heap
struct Heap {
    int *arr;
    int cap;
    int size;
    Heap(int c) {
        cap = c;
        arr = new int[cap];
        size = 1;
    }
    
    int left(int i) {
        if(size<=(2*i+1)) return -1;
        return 2*i+1;
    }
    
    int right(int i) {
        if(size<=(2*i+2)) return -1;
        return 2*i+2;
    }
    
    int parent(int i) {
        if(i==0) return -1;
        return (i-1)/2;
    }
};
