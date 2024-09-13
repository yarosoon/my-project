# CMake generated Testfile for 
# Source directory: /home/ubuntu/yarosoon/workspace/projects/my-project
# Build directory: /home/ubuntu/yarosoon/workspace/projects/my-project/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(FunctionTest "/home/ubuntu/yarosoon/workspace/projects/my-project/build/test_function")
set_tests_properties(FunctionTest PROPERTIES  _BACKTRACE_TRIPLES "/home/ubuntu/yarosoon/workspace/projects/my-project/CMakeLists.txt;34;add_test;/home/ubuntu/yarosoon/workspace/projects/my-project/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
