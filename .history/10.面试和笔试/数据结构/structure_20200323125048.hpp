

template <class T>
struct MaxHeap {
 public:
  MaxHeap(T[] arr){
    
  }
  ~MaxHeap() { delete[] data; }
  int size() { return size_; }
  bool empty() { return size_ == 0; }
  void insert(T elem){
    if(size_<)
  }

 private:
  int size_;
  T* data;
  void _shift_up(int k);
  void _make_heap();
};

template<class T>
void MaxHeap<T>::_shift_up(int k){
  while(k > 0 and data[k] > data[(k>1)])
}