//
// Created by spaceformind on 04.05.21.
//

/*
 * Code samples from task written with build-errors
 * I put implementation to .h file
 * It's work!
 * Bellow you can see linker-error log
 *
 * /home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:8: undefined reference to `Vector<int>::Vector(int, int)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:9: undefined reference to `operator>>(std::istream&, Vector<int>&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:10: undefined reference to `operator<<(std::ostream&, Vector<int> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:12: undefined reference to `Vector<int>::Vector(int, int)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:13: undefined reference to `operator<<(std::ostream&, Vector<int> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:15: undefined reference to `Vector<int>::operator=(Vector<int> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:16: undefined reference to `operator<<(std::ostream&, Vector<int> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:18: undefined reference to `Vector<int>::operator[](int)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:20: undefined reference to `Vector<int>::operator()()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:22: undefined reference to `Vector<int>::operator+(int)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:22: undefined reference to `Vector<int>::operator=(Vector<int> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:22: undefined reference to `Vector<int>::~Vector()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:23: undefined reference to `operator<<(std::ostream&, Vector<int> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:47: undefined reference to `Vector<Time>::Vector(int, Time)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:48: undefined reference to `operator>>(std::istream&, Vector<Time>&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:49: undefined reference to `operator<<(std::ostream&, Vector<Time> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:51: undefined reference to `Vector<Time>::Vector(int, Time)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:52: undefined reference to `operator<<(std::ostream&, Vector<Time> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:54: undefined reference to `Vector<Time>::operator=(Vector<Time> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:55: undefined reference to `operator<<(std::ostream&, Vector<Time> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:55: undefined reference to `Vector<Time>::operator[](int)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:56: undefined reference to `Vector<Time>::operator()()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:58: undefined reference to `Vector<Time>::operator+(Time)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:58: undefined reference to `Vector<Time>::operator=(Vector<Time> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:58: undefined reference to `Vector<Time>::~Vector()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:59: undefined reference to `operator<<(std::ostream&, Vector<Time> const&)'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:51: undefined reference to `Vector<Time>::~Vector()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:47: undefined reference to `Vector<Time>::~Vector()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:12: undefined reference to `Vector<int>::~Vector()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:8: undefined reference to `Vector<int>::~Vector()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:22: undefined reference to `Vector<int>::~Vector()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:58: undefined reference to `Vector<Time>::~Vector()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:51: undefined reference to `Vector<Time>::~Vector()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:47: undefined reference to `Vector<Time>::~Vector()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:12: undefined reference to `Vector<int>::~Vector()'
/home/spaceformind/CLionProjects/MAX_OOP_7/main.cpp:8: undefined reference to `Vector<int>::~Vector()'
collect2: error: ld returned 1 exit status
 */
