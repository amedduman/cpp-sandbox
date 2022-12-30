#include <iostream>

void pp(int& i)
{
    std::cout << &i << " " << i << " "<< sizeof(i) << std::endl;
}

template <typename T>
class DynamicArray
{
    T* m_arr;
    size_t m_size;
public:
    DynamicArray(size_t size)
        : m_size(size), m_arr(new T[size]) // when we create a array with new operator it will set all values to its default .
    {
        std::cout << "array constructed" << std::endl;
    }

    ~DynamicArray()
    {
        delete [] m_arr;
        std::cout << "array destructed" << std::endl;
    }

    int get(size_t index) const
    {
        return m_arr[index];
    }

    void set(size_t index, T val)
    {
        m_arr[index] = val;
    }

    void print() const
    {
        for(size_t i = 0; i < m_size; i++)
        {
            std::cout << i << " => " << m_arr[i] << std::endl;
        }
    }

    T& operator [](size_t index)
    {
        return m_arr[index];
    }
};

int main()
{
    DynamicArray<float> myArr(10);

    myArr[2] = 3.2f;

    myArr.print();

}
