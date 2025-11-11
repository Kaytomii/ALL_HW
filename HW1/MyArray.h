#pragma once
class MyArray
{
private:
	int* array;
	size_t size;
public:
	MyArray();
	MyArray(int* arr, size_t s);
	MyArray(const MyArray& obj);
	MyArray(MyArray&& obj) noexcept;
	MyArray& operator= (MyArray&& obj) noexcept;
	MyArray& operator=(const MyArray& obj) noexcept;

	int* getArray() const;
	size_t getSize() const;

	void setArray(int* arr);
	void setSize(size_t s);

	void print_Array() const;
	void find_sum_Array() const;
	int return_index_of_element(int element);
	void sort_Array();
	int find_Max() const;
	int find_Min() const;

	~MyArray();
};
