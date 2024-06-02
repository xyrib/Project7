// FunctionClasses.h
#pragma once
#include <cmath>

class Function {
public:
    Function() = default;
    Function(const Function&) = default;
    virtual double CalculateFunc(double x, double y) const = 0;
    virtual ~Function() {}
};

class ConcreteFunction : public Function {
public:
    ConcreteFunction() = default;
    ConcreteFunction(const ConcreteFunction&) = default;
    double CalculateFunc(double x, double y) const override {
        return x * y;
    }
};

class SinSumFunction : public Function {
public:
    SinSumFunction() = default;
    SinSumFunction(const SinSumFunction&) = default;
    double CalculateFunc(double x, double y) const override {
        return sin(x + y);
    }
};

class CosProductFunction : public Function {
public:
    CosProductFunction() = default;
    CosProductFunction(const CosProductFunction&) = default;
    double CalculateFunc(double x, double y) const override {
        return cos(x * y);
    }
};

class SquareProductFunction : public Function {
public:
    SquareProductFunction() = default;
    SquareProductFunction(const SquareProductFunction&) = default;
    double CalculateFunc(double x, double y) const override {
        return pow(x * y, 2);
    }
};

struct Node {
    Function* func;
    Node* next;
};

class Container {
private:
    Node* head;
    Node* tail;
public:
    Container() : head(nullptr), tail(nullptr) {}
    ~Container() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void Add(Function* function) {
        Node* current = new Node();
        current->func = function;
        current->next = nullptr;
        if (head == nullptr) {
            head = current;
            tail = current;
        }
        else {
            tail->next = current;
            tail = current;
        }
    }
    double CalculateProduct(double x, double y) const {
        double product = 1.0;
        Node* temp = head;
        while (temp != nullptr) {
            product *= temp->func->CalculateFunc(x, y);
            temp = temp->next;
        }
        return product;
    }
};
