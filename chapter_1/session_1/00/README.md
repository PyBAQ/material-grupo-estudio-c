
```
// C version gcc
struct string_elem_t { const char* str_; string_elem_t* next_; };
int num_hamlet(string_elem_t* books) {
  const char* hamlet = "Hamlet";
  int n = 0;
  string_elem_t* b; 
  for (b = books; b != 0; b = b->next_)
    if (strcmp(b->str_, hamlet) == 0)
      ++n;
  return n;
}


// C++ version g++
int num_hamlet(const std::list<std::string>& books) {
  return std::count(books.begin(), books.end(), "Hamlet");
}

```




https://www.tutorialspoint.com/c_standard_library/limits_h.htm
https://learn.microsoft.com/en-us/cpp/c-language/cpp-integer-limits?view=msvc-170