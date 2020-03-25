

template <class T>
struct MaxHeap {
 public:
  MaxHeap(int capacity) :{ 
    static_assert
    data(new T[capacity]) }
  ~MaxHeap() { delete[] data; }
  int size() { return size_; }
  bool empty() { return size_ == 0;}

 private:
  int size_;
  T* data;
  void _shift_up();

};
