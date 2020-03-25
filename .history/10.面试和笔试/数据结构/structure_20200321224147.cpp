

template <class T>
struct MaxHeap {
public:
  MaxHeap(int size){
    data = new T[size];
  }
  int size(){
    return size_;
  }
  T& operator []()

private:
  int size_;
  T* data;
};
