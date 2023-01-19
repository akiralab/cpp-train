// =====================================================================================================
// CANNOT USE THESE FOR VAR NAME (84 words)
// alignas, alignof, and, and_eq, asm, auto, bitand, bitor, bool, break,
// case, catch, char, char16_t, char32_t, class, compl, const, constexpr, const_cast,
// continue, decltype, default, delete, do, double, dynamic_cast, else, enum, explicit, 
// export, extern, false, float, for, friend, goto, if, inline, int, 
// long, mutable, namespace, new, noexcept, not, not_eq, nullptr, operator, or, 
// or_eq, private, protected, public, register, reinterpret_cast, return, short, signed, sizeof, 
// static, static_assert, static_cast, struct, switch, template, this, thread_local, throw, true, 
// try, typedef, typeid, typename, union, unsigned, using, virtual, void, volatile, 
// wchar_t, while, xor, xor_eq
// =====================================================================================================

#include <iostream>
using namespace std;

int main()
{
    // Declare
    int a, b;
    int result;
        // Other Patterns
        // int a = 0;
        // int a (0);
        // int a {0};

    // Process
    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    // Output
    cout << "---var int" << endl;
    cout << result << endl;

    // Terminate
    return 0;
}