#include <iostream>
#include <vector>

class Example
{
public:

    // bogus parameters to help illustrate the idea
    Example(const char *, int)
    {
    }
};

int main()
{
    std::vector<Example> ve;
    Example e("Example object 1", 1);

    ve.push_back(e);
    ve.push_back(Example("Example object 2", 2));
    ve.emplace_back("Example object 3", 3);
}