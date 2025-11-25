#pragma once
#include "Node.h"
#include <iostream>

template <typename T>
class List
{
private:
    Node<T>* head;
    unsigned int size;

public:
    List();
    ~List();

    void AddToHead(const T& value);
    void AddToTail(const T& value);

    void DeleteFromHead();
    void DeleteFromTail();

    void DeleteAll();

    void Show() const;

    unsigned int GetSize() const;
};


template <typename T>
List<T>::List() : head(nullptr), size(0) {}

template <typename T>
List<T>::~List()
{
    DeleteAll();
}

template <typename T>
void List<T>::AddToHead(const T& value)
{
    Node<T>* newNode = new Node<T>(value);
    newNode->next = head;
    head = newNode;
    ++size;
}

template <typename T>
void List<T>::AddToTail(const T& value)
{
    Node<T>* newNode = new Node<T>(value);
    if (!head)
    {
        head = newNode;
    }
    else
    {
        Node<T>* current = head;
        while (current->next)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    ++size;
}

template <typename T>
void List<T>::DeleteFromHead()
{
    if (!head) return;

    Node<T>* temp = head;
    head = head->next;
    delete temp;
    --size;
}

template <typename T>
void List<T>::DeleteFromTail()
{
    if (!head) return;

    if (!head->next)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node<T>* current = head;
        while (current->next->next)
        {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
    }
    --size;
}

template <typename T>
void List<T>::DeleteAll()
{
    while (head)
    {
        DeleteFromHead();
    }
}

template <typename T>
void List<T>::Show() const
{
    Node<T>* current = head;
    while (current)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

template <typename T>
unsigned int List<T>::GetSize() const
{
    return size;
}