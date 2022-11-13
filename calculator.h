#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <string>
class Calculator
{
public:
    Calculator();
    static std::string calculate(std::string in_str);
private:
    struct node;
    static bool is_empty(node* top);
    static node* make_stack(std::string b);
    static node* add_element_top(node* top, std::string num);
    static node *del_top(node* front);
    static void del_all(node* top);
    static void output_list(node* top);
    static int getPriority(char c);
    static std::string t_postfix(std::string str, struct node* Stack);
    static node *result(node* top, std::string out_str);
};

#endif // CALCULATOR_H
