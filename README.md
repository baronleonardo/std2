# std2
an attempted to make a better c++ std

### the attempt:
- recreate STL but all of them can't be copyable (all must be moved)
- no default constructor/destructor
- use create() and destroy() instead
- don't use overload/override
- don't use default parameter

### what stopped me
- move always call destructor
- there is a better aproach to what I wanted [check this](https://github.com/MoustaphaSaad/mn)