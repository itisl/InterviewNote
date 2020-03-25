

template <class T>
struct MaxHeap {
 public:
  MaxHeap(int size) { data = new T[size]; }
  ~MaxHeap() { delete[] data; }
  int size() { return size_; }

 private:
  int size_;
  T* data;
};
