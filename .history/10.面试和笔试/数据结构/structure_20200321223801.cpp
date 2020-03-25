

template <class T>
struct MaxHeap {
public:
  MaxHeap(int size){
    data = new T[size];
  }

private:
  int size_;
  T* data;
};
