

template <class T>
struct MaxHeap {
public:
  MaxHeap(int size){
    data = new T[size];
  }
  int size(){
    return size_;
  }
  T& operator [](const int idx){
    return T[idx];
  }
  T push_back();
  T pop_back()

private:
  int size_;
  T* data;
};
