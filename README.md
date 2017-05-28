# JVM
Java Virtual Machine to interpret a `.class` file.
# Coding Standard

* Use Doxygen docmentation in all files.
* Use header files for function prototype and documentation.
* To avoid merge commits, use `git fetch` and `git rebase`. It brings your commit above the last one.

# Compiling

    mkdir build && cd build
    cmake ..
    make
    ./jvm <file path>

# Recommended Atom Plugins
|Packages|Description|
|-|-|
|docblockr|Make documentation easy|
|goto-definition|Easy to find function definition|
|markdown-preview|Preview of mardown README.md|
