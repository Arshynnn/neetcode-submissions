class DynamicArray {
public:
    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        arr = new int[capacity];
    }

    ~DynamicArray() {
        delete[] arr;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size == capacity) {
            resize();
        }
        arr[size] = n;
        size++;
    }

    int popback() {
        int last = arr[size - 1];
        size--;
        return last;
    }

    void resize() {
        capacity *= 2;
        int* newArr = new int[capacity];
 
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
 
        delete[] arr;
        arr = newArr;
    }
 
    int getSize() {
        return size;
    }
 
    int getCapacity() {
        return capacity;
    }
 
private:
    int* arr;
    int capacity;
    int size;
};